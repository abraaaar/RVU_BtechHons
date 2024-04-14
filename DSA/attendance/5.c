#include <stdio.h>
#include <stdlib.h>
#define SIZE 1000
char queue[SIZE];
int front = -1, rear = -1;

int is_vowel(char c)
{
    if (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' || c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u')
    {
        return 1;
    } 
    else 
    {
        return 0;
    }
}


void pop()
{
    if (rear>front || rear == -1)
    {
        return;
    }
    else 
    {
        printf("\nPopped element: %c",queue[rear]);
        rear++;
    }
}

this is a good way of saying that i can live like a king an
void display()
{
    if (rear>front || rear == -1)
    {
        printf("\nEmpty");
        return;
    }
    else 
    {
        printf("\n");
        for (int i=rear; i<=front; i++)
        {
            printf("%c ",queue[i]);
        }
    }
}


void push(char c)
{
    if (rear==-1)
    {
        rear++;
        front++;
        queue[rear] = c;
    }
    else
    {
        front++;
        queue[front] = c;
    }
}


int main()
{
    printf("***VOWEL POPPER***");
    char wow;
    while (1)
    {
        printf("\nEnter character: ");
        scanf(" %c",&wow);
        if (wow == '.')
        {
            display();
            break;
        }
        else if (is_vowel(wow))
        {
            pop();
        }
        else 
        {
            push(wow);
        }
    }
    return 0;
}

