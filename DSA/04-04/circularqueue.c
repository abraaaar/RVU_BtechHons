#include <stdio.h>
#include <stdlib.h>
#define N 5
int topf = -1, topr = -1, loopr = 0, loopf = 0;

void peek(int a[]);
void dequeue(int a[]);
void enqueue(int a[]);
void display(int a[]);

int main()
{
    int queue[N];
    int num;

    while (1)
    {
        printf("\n\nChoose what you wanna do (1/2/3/4/5) \n1. Peek\t\t2. Dequeue\t\t3. Enqueue\t\t4. Display\t\t5. Exit Program :- ");
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
            display(queue);
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

void peek(int a[])
{
    if ((topf == -1 && topr == -1) || ((loopr != 0) ? 0 : ((loopf < loopr) ? 0 : (topf > topr))))
    {
        printf("\nThe queue is empty");
    }
    else
    {
        printf("\nFront value: %d\tRear Value: %d", a[topf], a[topr]);
    }
    printf("\nFront Index = %d\tRear Index = %d", topf, topr);
}

void dequeue(int a[])
{
    int d = 0;
    if ((topf == -1 && topr == -1) || ((loopr != 0) ? 0 : ((loopf < loopr) ? 0 : (topf > topr))))
    {
        printf("\nQueue underflow\nFront = %d\tRear = %d", topf, topr);
    }
    else
    {
        printf("\nDequeued element: %d\n", a[topf]);
        topf++;

        if ((topf == -1 && topr == -1) || ((loopr != 0) ? 0 : ((loopf < loopr) ? 0 : (topf > topr))))
        {
            printf("Queue has become empty");
        }

        else
        {
            if (topf == N)
            {
                loopf++;
                topf = 0;
            }
            printf("\nNew Queue: ");
            if (topf > topr)
            {
                for (int i = topf; (d == 0) ? (i != topr) : (i != topr + 1); i = (i + 1) % N)
                {
                    if (i == N - 1)
                    {
                        d = 1;
                    }
                    printf("%d ", a[i]);
                }
            }
            else
            {
                for (int i = topf; i <= topr; i++)
                {
                    printf("%d ", a[i]);
                }
            }
            printf("\nFront Index = %d\tRear Index= %d", topf, topr);
        }
    }
}
void enqueue(int a[])
{
    int d = 0;
    int num;
    printf("\nEnter the number: ");
    scanf("%d", &num);
    topr++;
    if (topf == -1)
    {
        topf++;
    }
    else if (topr == N)
    {
        loopr++;
        topr = 0;
        if (topr == topf)
        {
            topf++;
            if (topf == N)
            {
                loopf++;
                topf = 0;
            }
        }
    }
    else
    {
        if (loopr != 0 && topr == topf)
        {
            topf++;
            if (topf == N)
            {
                loopf++;
                topf = 0;
            }
        }
    }
    a[topr] = num;

    printf("\nNew Queue: ");
    if (topf > topr)
    {
        for (int i = topf; (d == 0) ? (i != topr) : (i != topr + 1); i = (i + 1) % N)
        {
            if (i == N - 1)
            {
                d = 1;
            }
            printf("%d ", a[i]);
        }
    }
    else
    {
        for (int i = topf; i <= topr; i++)
        {
            printf("%d ", a[i]);
        }
    }
    printf("\nFront Index= %d\tRear Index= %d", topf, topr);
}

void display(int a[])
{
    int d = 0;
    if ((topf == -1 && topr == -1) || ((loopr != 0) ? 0 : ((loopf < loopr) ? 0 : (topf > topr))))
    {
        printf("\nThe queue is empty");
    }
    else
    {
        printf("Circular Queue is ");
        if (topf > topr)
        {
            for (int i = topf; (d == 0) ? (i != topr) : (i != topr + 1); i = (i + 1) % N)
            {
                if (i == N - 1)
                {
                    d = 1;
                }
                printf("%d ", a[i]);
            }
        }
        else
        {
            for (int i = topf; i <= topr; i++)
            {
                printf("%d ", a[i]);
            }
        }
        printf("\nFront Index= %d\tRear Index= %d", topf, topr);
    }
}