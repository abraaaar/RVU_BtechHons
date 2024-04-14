import random
import string

def generate_password(length, digit_percent, alphabet_percent, symbol_percent):
  characters = ""
  password = ""
  
  # Calculate the number of characters for each category based on the percentages
  digit_count = int(length * digit_percent / 100)
  alphabet_count = int(length * alphabet_percent / 100)
  symbol_count = int(length * symbol_percent / 100)
  
  # Generate random digits
  for _ in range(digit_count):
    characters += string.digits
  
  # Generate random alphabets
  for _ in range(alphabet_count):
    characters += string.ascii_letters
  
  # Generate random symbols
  for _ in range(symbol_count):
    characters += string.punctuation
  
  # Generate the password by randomly selecting characters from the generated pool
  password = ''.join(random.choice(characters) for _ in range(length))
  
  return password

length = int(input("Enter the length of the password: "))
digit_percent = int(input("Enter the percentage of digits: "))
alphabet_percent = int(input("Enter the percentage of alphabets: "))
symbol_percent = int(input("Enter the percentage of symbols: "))

password = generate_password(length, digit_percent, alphabet_percent, symbol_percent)
print("Generated Password:", password)