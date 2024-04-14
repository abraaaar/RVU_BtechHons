#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#define SIZE 100

char infix[SIZE], temp[SIZE];
int top_infix = 0 , top_temp = 0;

void permute(char str[])
{
  int i = 0;
  while (str[i] != '\0')
  {
    if (isalpha(str[i]) || isdigit(str[i]))
    {
      push(str[i]);
    }
    else if (is_ope(str[i]))
    {
      wow(str[i]);
    }
    i++;
  }
}

void push(char c)
{
  infix[top_infix] = c;
  top_infix++;
}

int is_ope(char c)
{
  if (c == '+' || c == '-' || c == '*' || c == '/' || c == '^' || c == '(' || c == ')')
  {
    return 1;
  }
  else
  {
    return 0;
  }
}

void wow(char c)
{
  
}

int main()
{
  char str[SIZE];
  printf("Enter the postfix expression: ");
  scanf("%s",&str);
  permute(str);
}