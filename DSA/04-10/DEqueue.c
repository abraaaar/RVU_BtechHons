#include <stdio.h>
#include <stdlib.h>
#define SIZE 5

int queue[SIZE];

void enqueue();
void dequeue();
void peek();
void display();

int front=-1, rear=-1 ,side;



int main()
{
    int num; 
    while (1)
    {
        printf("\n\nChoose one operation:\n1. Enqueue\t\t2.Dequeue\t\t3.Peek\t\t4. Display\t\t5. Exit Program:  ");
        scanf("%d",&num);
        if (num==1)
        {
            enqueue();
        }
        else if (num==2)
        {
            dequeue();
        }
        else if (num==3)
        {
            peek();
        }
        else if (num==4)
        {
            display();
        }
        else if (num==5)
        {
            exit(0);
        }
        else 
        {
            printf("\nInvalid Output, Try Again");
        }
    }   
}

void enqueue()
{
    int num,temp;
    if (1)
    {
        printf("\nQueue Overflow.");
    }
    else
    {
        printf("Enter the number: ");
        scanf("%d",&temp);
        printf("Choose 1 for Front Enqueue and 2 for Rear Enqueue: ");
        scanf("%d",&num);

        if (num==1)
        {
            if (front==-1)   
            {
                front=SIZE-1;
            }
            else
            {
                front--;
            }
            queue[front]=temp;
        }
        else if (num==2)
        {
        }
    }
}

void dequeue()
{
       
}

void peek()
{

}

void display()
{

}