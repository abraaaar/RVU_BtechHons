#include <stdio.h>
#define SIZE 10
int MyDivBy5Stack[SIZE];
int top=-1;
void push(int arr[]);
void peek(int arr[]);
void pop(int arr[]);

int main()
{
    int MyNumbers[SIZE];
    for (int i=0; i<SIZE; i++)
    {
        printf("Enter the element %d of Number Array: ",i+1);
        scanf("%d",&MyNumbers[i]);
    }
    push(MyNumbers);
    pop(MyDivBy5Stack);
    peek(MyDivBy5Stack);
    printf("\nMyDivBy5Stack is ");
    for (int i=0; i<top+1   ; i++)
    {
        printf("%d ",MyDivBy5Stack[i]);
    }
}

void push(int arr[])
{
    for (int i=0; i<SIZE; i++)
    {
        if (arr[i]%5 == 0)
        {
            top++;
            MyDivBy5Stack[top]=arr[i];
        }
    }
}

void peek(int arr[])
{
    printf("Top = %d \t Top Element = %d",top,MyDivBy5Stack[top]);
}

void pop(int arr[])
{
    int count=0;
    for (int i=0; i<=top; i++)
    {
        if ((arr[i]==5) || (arr[i]==25))
        {
            for (int j=i+1; j<=top; j++)
            {
                arr[j-1]=arr[j];
            }
            count++;
            i--;
        }
    }
    if (count>0)
    {
        for (int i=1; i<=count; i++)
        {
            top--;
        }
    }
}