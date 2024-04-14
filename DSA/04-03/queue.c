#include <stdio.h>
#include <stdlib.h>
#define N 1000
int topf = -1, topr = -1;

void peek(int a[]);
void dequeue(int a[]);
void enqueue(int a[]);

int main()
{
    char wow;
    int queue[N];
    int num;

    while (1)
    {
        printf("\n\nChoose what you wanna do (1/2/3/4) \n1. Peek\t\t2. Dequeue\t\t3. Enqueue\t\t4. Exit Program :- ");
        scanf("%d", &num);
        if (num == 1)
        {
            peek(queue);
        }
        else if (num == 2)
        {
            dequeue(queue);
        }
        else if (num == 3)
        {
            enqueue(queue);
        }
        else if (num == 4)
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

void peek(int a[])
{
    if (topf == -1 || topf == N - 1 || topr == -1 || topf > topr)
    {
        printf("\nThe queue is empty");
    }
    else
    {
        printf("\nFront value: %d\tRear Value: %d", a[topf], a[topr]);
    }
    printf("\nFront = %d\tRear = %d", topf, topr);
}

void dequeue(int a[])
{
    if (topf == N - 1 || topr == -1 || topf > topr)
    {
        printf("\nQueue underflow\nFront = %d\tRear = %d", topf, topr);
    }
    else
    {
        printf("\nDequeued element: %d\n", a[topf]);
        topf++;
        if (topf == N - 1 || topf > topr)
        {
            printf("Queue has become empty");
        }
        else
        {
            printf("New Queue: ");
            for (int i = topf; i <= topr; i++)
            {
                printf("%d ", a[i]);
            }
            printf("\nFront = %d\tRear = %d", topf, topr);
        }
    }
}

void enqueue(int a[])
{
    char wow;
    int num;
    if (topr == N - 1)
    {
        printf("\nQueue overflow\n");
        exit(0);
    }
    printf("\nEnter the number: ");
    scanf("%d", &num);
    topr++;
    if (topf == -1)
    {
        topf++;
    }
    a[topr] = num;
    printf("\nNew Queue: ");
    for (int i = topf; i <= topr; i++)
    {
        printf("%d ", a[i]);
    }
    printf("\nFront = %d\tRear = %d", topf, topr);
}