#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 50
int top1=-1, top2=-1;

char stack[SIZE], temp[SIZE], expression[SIZE];
void InfixToPostfix(char e[]);
void push(char c);
int isoperator(char c);
void precedence(char c);
void pop();


int main()
{
    printf("Enter an expression: ");
    scanf("%s",expression);
    printf("Infix expression:  %s",expression);
    InfixToPostfix(expression);
    printf("\nPostfix expression:  %s",stack);
}

void InfixToPostfix(char e[])
{
    int i=0;
    while (e[i] != '\0')
    {
        if (isalpha(e[i]) || isdigit(e[i]))
        {
            push(e[i]);
        }
        else if (isoperator(e[i]))
        {
            precedence(e[i]);
        }
        i++;
    }
    for (i=top2; i>-1; i--)
    {
        pop(temp[top2]);
    }
}

void push(char c)
{
    if (top1 == SIZE - 1)
    {
        printf("Stack overflow\n");
    }
    else
    {
        top1++;
        stack[top1]=c;
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

void precedence(char c)
{
    if(top2==-1 || c=='(')
    {
        top2++;
        temp[top2]=c;
    }
    else if (c==')')
    {
        while (temp[top2]!='(')
        {
            pop();
        }
        top2--;
    }
    else if (temp[top2]=='^' && (c != '(' && c != ')'))
    {
        push(temp[top2]);
        top2--;
        precedence(c);
    }
    else if (temp[top2]=='*' && (c != '(' && c != ')' && c != '^'))
    {
        push(temp[top2]);
        top2--;
        precedence(c);
    }
    else if (temp[top2]=='/' && (c != '(' && c != ')' && c != '^'))
    {
        push(temp[top2]);
        top2--;
        precedence(c);
    }
    else if (temp[top2]=='+' && (c != '(' && c != ')' && c != '^' && c != '*' && c != '/'))
    {
        push(temp[top2]);
        top2--;
        precedence(c);
    }
    else if (temp[top2]=='-' && (c != '(' && c != ')' && c != '^' && c != '*' && c != '/'))
    {
        push(temp[top2]);
        top2--;
        precedence(c);
    }
    else
    {
        top2++;
        temp[top2]=c;
    }
}

void pop()
{
    if (top2 == -1)
    {
        exit(0);
    }
    else
    {
        top1++;
        stack[top1]=temp[top2];
        top2--;
    }
}