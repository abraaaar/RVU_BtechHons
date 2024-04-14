#include <stdio.h>
#include <stdlib.h>
#define N 1000
int p, topf = -1, topr = -1;


void peek(int a[]);
void dequeue(int a[]);
void enqueue(int a[]);
void displayqueue(int a[]);

int main()
{
    int queue[N];
    int num;

    while (1)
    {
        printf("Enter\n1 for Minimum priority queue\t2 for Maximum priority queue:\t");
        scanf("%d", &p);

        if (p!=1 && p!=2)
        {
            printf("Invalid Output, Try again\n");
            continue;
        }
        else
        {
            break;
        }
    }
    while (1)
    {
        printf("\n\nChoose what you wanna do (1/2/3/4) \n1. Enqueue\t\t2. Dequeue\t\t3. Peek\t\t4. Display Queue\t\t5. Exit Program :- ");
        scanf("%d", &num);
        if (num == 1)
        {
            enqueue(queue);
        }
        else if (num == 2)
        {
            dequeue(queue);
        }
        else if (num == 3)
        {
            peek(queue);
        }
        else if (num==4)
        {
            displayqueue(queue);
        }
        else if (num == 5)
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
    printf("\nFront Index= %d\tRear Index= %d", topf, topr);
}








void dequeue(int a[])
{
    if (topf == N - 1 || topr == -1 || topf > topr)
    {
        printf("\nQueue underflow\nFront Index= %d\tRear Index= %d", topf, topr);
    }
    else
    {
        if (p == 1)
        {
            for (int i = topr; i > topf; i--)
            {
                if (a[i - 1] > a[i])
                {
                    int temp = a[i];
                    a[i] = a[i - 1];
                    a[i - 1] = temp;
                }
                else
                {
                    continue;
                }
            }
        }

        else if (p == 2)
        {
            for (int i = topr; i > topf; i--)
            {
                if (a[i - 1] < a[i])
                {
                    int temp = a[i];
                    a[i] = a[i - 1];
                    a[i - 1] = temp;
                }
                else
                {
                    continue;
                }
            }
        }
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
            printf("\nFront Index = %d\tRear Index = %d", topf, topr);
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
        int top=a[topr], index=topr;
        if (p == 1)
        {
            for (int i=topr; i > topf; i--)
            {
                if (a[i - 1] < top)
                {
                    top=a[i-1];
                    index=i-1;
                }
                else
                {
                    continue;
                }
            }
            printf("\nMinimum Priority value: %d  at Index: %d", top, index);
        }

        else if (p == 2)
        {
            for (int i=topr; i > topf; i--)
            {
                if (a[i - 1] > top)
                {
                    top=a[i-1];
                    index=i-1;
                }
                else
                {
                    continue;
                }
            }
            printf("\nMaximum Priority value: %d  at Index: %d", top, index);
        }        
    }
    printf("\nFront Index = %d\tRear Index = %d", topf, topr);
}








void displayqueue(int a[])
{
    if (topf == -1 || topf == N - 1 || topr == -1 || topf > topr)
    {
        printf("\nThe queue is empty");
    }
    else
    {
        printf("\nQueue: ");
        for (int i = topf; i <= topr; i++)
        {
            printf("%d ", a[i]);
        }
        printf("\nFront Index = %d\tRear Index = %d", topf, topr);
    }
}