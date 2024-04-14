#include <stdio.h>
#include <stdlib.h>

typedef struct linkedlist
{
  int data;
  struct linkedlist *next;
} singly;

singly *head = NULL;
singly *tail = NULL;

void addNode(int data)
{
  singly *newNode = malloc(sizeof(singly));
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

void dup_delete(singly *temp)
{
  if (temp == NULL || temp->next == NULL) {
    return;
  }
  
  singly *curr = temp;
  while (curr != NULL && curr->next != NULL) {
    singly *innerCurr = curr;
    while (innerCurr->next != NULL) {
      if (innerCurr->next->data == curr->data) {
        singly *duplicate = innerCurr->next;
        innerCurr->next = innerCurr->next->next;
        free(duplicate);
      } else {
        innerCurr = innerCurr->next;
      }
    }
    curr = curr->next;
  }
  
  dup_delete(temp->next);
}

void display()
{
    singly *current = head;
    printf("\nNodes of the singly linked list are: ");
    while (current != NULL)
    {
        printf("%d ",current->data);
        current = current->next;
    }
}

int main()
{
  int i = 1, n, data;
  printf("Enter the number of elements: ");
  scanf("%d", &n);
  while (i <= n)
  {
    printf("Enter the %d element: ", i);
    scanf("%d", &data);
    addNode(data);
    i++;
  }
  display();
  printf("\nAfter removing duplicates: ");
  dup_delete(head);
  display();
}