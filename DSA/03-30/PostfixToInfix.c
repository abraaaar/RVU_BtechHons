// #include <stdio.h>
// #include <stdlib.h>
// #include <string.h>
// #include <ctype.h>

// #define SIZE 50

// int top1 = -1, top2 = -1;

// char stack[SIZE], temp[SIZE], expression[SIZE];
// void PostFixToInfix(char e[]);
// void push_operand(char c);
// int isoperator(char c);
// void push_operator(char c);
// void pop(char c);

// int main()
// {
//     printf("Enter the Postfix expression: ");
//     scanf("%s",expression);

//     printf("\nPostfix expression: %s", expression);
//     PostFixToInfix(expression);
//     printf("\nInfix expression: %s", stack);
// }

// void PostFixToInfix(char e[])
// {
//     int i=0;
//     while (e[i] != '\0')
//     {
//         if (isalpha(e[i]))
//         {
//             push_operand(e[i]);
//         }
//         else if (isoperator(e[i]))
//         {
//             push_operator(e[i]);
//         }
//         i++;
//     }  
// }

// void push_operand(char c)
// {
//     if (top1 == SIZE - 1)
//     {
//         printf("Stack overflow\n");
//     }
//     else
//     {
//         top1++;
//         stack[top1]=c;
//     }
// }

// int isoperator(char c)
// {
//     if ((c == '+') || (c == '-') || (c == '*') || (c == '/') || (c == '^') || (c == '(') || (c == ')'))
//     {
//         return 1;
//     }
//     else
//     {
//         return 0;
//     }
// }

// void push_operator(char c)
// {
//     char t[SIZE];
//     int count = 1;
//     while (top1 != -1 && c !='(')
//     {
//         if (top1==1)
//         {
//             top2++;
//             temp[top2]=stack[top1];
//             pop(stack[top1]);
//             top2++;
//             temp[top2]=stack[top1];
//             pop(stack[top1]);
//             exit(0);
//         }
//         else
//         {
//             top2++;
//             temp[top2]=stack[top1];
//             pop(stack[top1]);
//             count++;
//         }
//     }
    

//     t[0]='(';
//     for (int i=1,j=0; i<count; i++,j++)
//     {
//         t[i]=temp[j];
//     }
//     t[count+1]=')';
    

//     int len=strlen(t);
//     for (int i=0; i<len; i++)
//     {
//         top1++;
//         stack[top1]=t[i];
//     }
// }
// void pop(char c)
// {
//     if (top1 == -1)
//     {
//         printf("Stack underflow.");
//         exit(0);
//     }
//     top1--;
// }

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <ctype.h>

#define SIZE 50

void postfixtoinfix(char str)
{
    int i = 0;
    while (str[i] != '\0')
    {
        if (isalnum(str[i]) || isalpha(str[i]))
        {
            
        }
    }
    
}

int main()
{
    char wow[SIZE];
    printf("Enter the postfix expression: ");
    scanf("%s",&wow);
    postfixtoinfix(wow);
}