#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 50

int top1 = -1, top2 = -1;

char stack[SIZE], temp[SIZE], expression[SIZE];
void PostFixToInfix(char e[]);
void push_operand(char c);
int isoperator(char c);
void push_operator(char c);
void pop();

int main()
{
    printf("Enter the Postfix expression: ");
    scanf("%s", expression);

    printf("\nPostfix expression: %s", expression);
    PostFixToInfix(expression);
    printf("\nInfix expression: %s", stack);

    return 0;
}

void PostFixToInfix(char e[])
{
    int i = 0;
    while (e[i] != '\0')
    {
        if (isalpha(e[i]))
        {
            push_operand(e[i]);
        }
        else if (isoperator(e[i]))
        {
            push_operator(e[i]);
        }
        i++;
    }

    while (top2 != -1)
    {
        top1++;
        stack[top1] = temp[top2];
        top2--;
    }
}

void push_operand(char c)
{
    if (top1 == SIZE - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top1++;
        stack[top1] = c;
    }
}

int isoperator(char c)
{
    if ((c == '+') || (c == '-') || (c == '*') || (c == '/') || (c == '^') || (c == '(') || (c == ')'))
    {
        return 1;
    }
    else
    {
        return 0;
    }
}

void push_operator(char c)
{
    char t[SIZE];
    int count = 0;
    while (top1 != -1 && stack[top1] != '(' && ((c != '^' && (stack[top1] == '*' || stack[top1] == '/')) || (c != '^' && (stack[top1] == '+' || stack[top1] == '-')) || (c == '^' && stack[top1] == '^')))
    {
        top2++;
        temp[top2] = stack[top1];
        pop();
        count++;
    }

    top2++;
    temp[top2] = stack[top1];
    pop();

    t[count++] = '(';
    while (top2 != -1)
    {
        t[count++] = temp[top2];
        top2--;
    }
    t[count] = ')';

    int len = strlen(t);
    for (int i = len - 1; i >= 0; i--)
    {
        top1++;
        stack[top1] = t[i];
    }
}

void pop()
{
    if (top1 == -1)
    {
        printf("Stack underflow.");
        exit(0);
    }
    top1--;
}