#include <stdio.h>
#include <stdlib.h>

int size = 12, index_rear = -1, index_front = -1;
typedef struct queuelinkedlist
{
  char data;
  struct queuelinkedlist *next;
} queue;
queue *front;
queue *rear;

void enqueue(char c)
{
  if (index_front == size - 1)
  {
    printf("\nQueue Overflow");
    return;
  }
  else
  {
    queue *node = malloc(sizeof(queue));
    node->data = c;
    node->next = NULL;
    if (index_front == -1)
    {
      rear = node;
      front = node;
      index_rear++;
    }
    else
    {
      front->next = node;
      front = node;
      if (rear==NULL)
      {
        rear = node;
      }
    }
    index_front++;
  }
}


void display()
{
  if (index_rear == -1 || index_rear>index_front)
  {
    printf("\nQueue is empty");
    return;
  }
  else
  {
    printf("\nQueue : ");
    queue *temp = rear;
    while (temp != NULL)
    {
      printf("%c ", temp->data);
      temp = temp->next;
    }
    free(temp);
  }
}

int main()
{
  enqueue('1');
  enqueue('R');
  enqueue('V');
  enqueue('U');
  enqueue('2');
  enqueue('2');
  enqueue('C');
  enqueue('S');
  enqueue('E');
  enqueue('0');
  enqueue('0');
  enqueue('4');
  display();
}