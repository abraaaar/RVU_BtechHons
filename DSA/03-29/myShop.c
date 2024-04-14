#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define SIZE 5
int top=-1;

void push();
void pop();

struct stack
{
    int quantity;
    char itemname[30];
    float unitprice;
}S[SIZE], temp;


int main()
{
    int num;
    while (1)
        {
            printf("\n\nChoose what you wanna do (1/2/3) \n1. Push\t\t2. Pop\t\t3. Exit Program :- ");
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
    printf("Enter the Name of the item: ");
    scanf("%s", &temp.itemname);
    printf("Enter the Quantity: ");
    scanf("%d",&temp.quantity);
    printf("Enter unit price: ");
    scanf("%f",&temp.unitprice);
    top++;
    strcpy(S[top].itemname,temp.itemname);
    S[top].quantity=temp.quantity;
    S[top].unitprice=temp.unitprice;
    printf("\nTop = %d\n\nNew Structure:\n",top);
    for (int i = 0; i <= top; i++)
        {
            printf("Item Name: %s \tQuantity: %d\tUnitPrice: %.2f\tTotalCost: %.2f\n",S[i].itemname,S[i].quantity,S[i].unitprice,S[i].quantity*S[i].unitprice);
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
            printf("\n\nPopped Item: %s \tQuantity: %d\tUnitPrice: %.2f\tTotalCost: %.2f\n", S[top].itemname, S[top].quantity,S[top].unitprice,S[top].quantity*S[top].unitprice);
            top--;
            if (top == -1)
            {
                printf("\nStack has become empty\n");
            }
            else
            {
                printf("\n\nTop = %d\n\nNew Structure:\n",top);
                for (int i = 0; i <= top; i++)
                {
                    printf("Item Name: %s \tQuantity: %d\tUnitPrice: %.2f\tTotalCost: %.2f\n",S[i].itemname,S[i].quantity,S[i].unitprice,S[i].quantity*S[i].unitprice);
                }
            }   
        }
}