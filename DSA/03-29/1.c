#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5
int top=-1;

void push();
void pop();

struct stack
{
    int rollno;
    char name[30];
}S[SIZE], temp;


int main()
{
    int num;
    while (1)
        {
            printf("\nChoose what you wanna do (1/2/3) \n1. Push\t\t2. Pop\t\t3. Exit Program :- ");
            scanf("%d",&num);
            if (num==1)
            {
                push();
            }
            else if (num==2)
            {
                pop();
            }
            else if (num==3)
            {
                exit(0);
            }
            else
            {
                printf("Invalid Output, Try Again\n");
                continue;
            }
        }
}

void push()
{
    int num;
    if (top == SIZE-1)
    {
        printf("Stack Overflow");
        exit(0);
    }
    printf("Enter the RollNo. : ");
    scanf("%d", &temp.rollno);
    printf("Enter the Name.: ");
    scanf("%s", temp.name);
    top++;
    strcpy(S[top].name,temp.name);
    S[top].rollno=temp.rollno;
    printf("\nTop = %d\n\nNew Structure:\n",top);
    for (int i = 0; i <= top; i++)
        {
            printf("Name: %s\tRollno:%d\n",S[i].name,S[i].rollno);
        }  
}

void pop()
{
    if (top == -1)
        {
            printf("Stack underflow\nTop = -1");
        }
        else
        {
            printf("\nPopped Name: %s\tPopped Rollno: %d\n", S[top].name, S[top].rollno);
            top--;
            if (top == -1)
            {
                printf("Stack has become empty");
            }
            else
            {
                printf("\nTop = %d\n\nNew Structure:\n",top);
                for (int i = 0; i <= top; i++)
                {
                    printf("Name: %s\tRollno:%d\n",S[i].name,S[i].rollno);
                }
            }   
        }
}