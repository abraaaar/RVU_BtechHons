import re

class MacroProcessor:
    def __init__(self):  
        self.macros = {}
        self.conditional_stack = []  
        self.active = True  

    def define_macro(self, line):
        param_macro = re.match(r'#define\s+(\w+)\((.*?)\)\s+(.*)', line)
        if param_macro:
            name, params, body = param_macro.groups()
            self.macros[name] = ("param", [p.strip() for p in params.split(',')], body)
        else:
            simple_macro = re.match(r'#define\s+(\w+)\s+(.*)', line)
            if simple_macro:
                name, body = simple_macro.groups()
                self.macros[name] = ("simple", body.strip())

    def is_macro_line(self, line):
        return line.strip().startswith("#define")

    def handle_conditionals(self, line):
        stripped = line.strip()
        if stripped.startswith("#ifdef"):
            macro = stripped.split()[1]
            self.conditional_stack.append(self.active)
            self.active = macro in self.macros

        elif stripped.startswith("#ifndef"):
            macro = stripped.split()[1]
            self.conditional_stack.append(self.active)
            self.active = macro not in self.macros

        elif stripped.startswith("#else"):
            if self.conditional_stack:
                self.active = not self.active

        elif stripped.startswith("#endif"):
            if self.conditional_stack:
                self.active = self.conditional_stack.pop()

    def expand_macros_recursive(self, text):
        changed = True
        while changed:
            changed = False
            for name, macro in self.macros.items():
                if macro[0] == "simple":
                    pattern = rf'\b{name}\b'
                    if re.search(pattern, text):
                        text = re.sub(pattern, macro[1], text)
                        changed = True
        return text

    def expand_line(self, line):
        line = self.expand_macros_recursive(line)

        for name, macro in self.macros.items():
            if macro[0] == "param":
                params, body = macro[1], macro[2]
                matches = list(re.finditer(rf'\b{name}\((.*?)\)', line))
                for match in matches:
                    args = [arg.strip() for arg in match.group(1).split(',')]
                    if len(args) != len(params):
                        continue  
                    replaced = body
                    for p, a in zip(params, args):
                        replaced = re.sub(rf'\b{re.escape(p)}\b', a, replaced)
                    replaced = self.expand_macros_recursive(replaced)
                    line = line.replace(match.group(0), replaced)

        # 🔥 Evaluate simple math if it's on the RHS of an assignment
        assignment = re.match(r'(.*=\s*)([\d\+\-\*/\s\(\)]+);', line)
        if assignment:
            prefix, expr = assignment.groups()
            try:
                result = str(eval(expr))
                line = prefix + result + ';\n'
            except:
                pass  # If evaluation fails, leave it as-is

        return line

    def process(self, lines):
        output_lines = []
        for line in lines:
            if line.strip().startswith("#ifdef") or \
               line.strip().startswith("#ifndef") or \
               line.strip().startswith("#else") or \
               line.strip().startswith("#endif"):
                self.handle_conditionals(line)
                continue

            if not self.active:
                continue

            if self.is_macro_line(line):
                self.define_macro(line)
            else:
                expanded = self.expand_line(line)
                output_lines.append(expanded)
        return output_lines


def write_output(lines, filename='output.txt'):
    with open(filename, 'w') as f:
        f.writelines(lines)

def mock_lexer(source_code):
    tokens = re.findall(r'\w+|[^\s\w]', source_code)
    print("🔍 Lexical Tokens:")
    for token in tokens:
        print(token)


if __name__ == '__main__':
    print("Enter your code line by line. Type 'END' (in all caps) to finish input:")
    
    lines = [] 
    while True:
        line = input()
        if line.strip() == 'END': 
            break
        lines.append(line + '\n')  

    processor = MacroProcessor()
    output = processor.process(lines)
    write_output(output)
    print("✅ Macro expansion complete. Output written to 'output.txt'.")
    full_code = ''.join(output)
    mock_lexer(full_code)
