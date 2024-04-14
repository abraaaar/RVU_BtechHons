#include <stdio.h>
#include <stdlib.h>

typedef struct linkedlist
{
    int data;
    struct linkedlist *next;
}LL;

LL *head = NULL;
LL *tail = NULL;

void addNode(int data)
{
    LL *newNode = malloc(sizeof(LL));  
    newNode->data = data;
    newNode->next = NULL;
    if (head == NULL)
    {
        head = newNode;
        tail = newNode;
    }
    else
    {
        tail->next = newNode;
        tail = newNode;
    }
}



int main()
{
    int n, i=1, data;
    printf("Enter the number of elements: ");
    scanf("%d",&n);
    while (i<=n)
    {
        printf("Enter the %d element: ",i);
        scanf("%d",&data);
        addNode(data);
        i++;
    }
    if (n%2 == 0)
    {
      LL *temp = head;
      i = 0;
      while (i != n/2)
      {
        temp = temp->next;
        i++;
      }
      printf("%d",temp->data);
      free(temp);
    }
    else 
    {
      LL *temp = head;
      i = 0;
      while (i != n/2)
      {
        temp = temp->next;
        i++;
      }
      printf("%d",temp->data);
      free(temp);
    }
}