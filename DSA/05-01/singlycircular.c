#include <stdio.h>
#include <stdlib.h>

typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
}LL;

LL *head;
LL *tail;


void addNode(int data);
int countNodes();
void display();

int main()
{
    int n, i=0, data;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    while (i<n)
    {
        printf("Enter the %d element: ",i+1);
        scanf("%d",&data);
        addNode(data);
        i++;
    }

    printf("\nThe total number of nodes are: %d",countNodes());

    printf("\nThe linked list is: ");
    display();
}

void addNode(int data)
{
    LL *newNode = (LL*)malloc(sizeof(LL));  
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
        head->next = head;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
        newNode->next = head; 
    }
}

int countNodes()
{
    int count = 0;
    LL *current = head;
    while (current != NULL)
    {
        count++;
        current=current->next;
        if (current == head)
        {
          break;
        }
    }
    return count;
}

void display()
{
    LL *current = head;
    if (head == NULL)
    {
        printf("The Linked List is empty.");
        exit(0);
    }
    printf("Nodes of the singly linked list are: ");
    
    while (current != NULL)
    {
        printf("Data: %d    Data.next = %d ",current->data,current->next);
        current = current->next;
        if (current == head)
        {
          break;
        }
    }
}
