#include <stdio.h>
#include <stdlib.h>

int size, index_rear = -1, index_front = -1;
typedef struct queuelinkedlist
{
  int data;
  struct queuelinkedlist *next;
} queue;
queue *front;
queue *rear;

void enqueue()
{
  if (index_front == size - 1)
  {
    printf("\nQueue Overflow");
    return;
  }
  else
  {
    queue *node = malloc(sizeof(queue));
    printf("\nEnter data: ");
    scanf("%d", &node->data);
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

void dequeue()
{
  if (index_rear == -1 || index_rear>index_front) 
  {
    printf("\nQueue underflow");
    return;
  }
  else
  {
    printf("\nDequeued node : %d", rear->data);
    rear = rear->next;
    index_rear++;
  }
}

void peek()
{
    printf("\nRear Index= %d, Front Index= %d", index_rear, index_front); 
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
      printf("%d ", temp->data);
      temp = temp->next;
    }
    free(temp);
  }
}

int main()
{
  printf("Enter the size of the queue: ");
  scanf("%d", &size);
  int choose;
  while (1)
  {
    printf("\nChoose:   1. Enqueue    2. Dequeue    3. Peek    4. Display    5. Exit Program : ");
    scanf("%d", &choose);
    if (choose == 1)
    {
      enqueue();
    }
    else if (choose == 2)
    {
      dequeue();
    }
    else if (choose == 3)
    {
      peek();
    }
    else if (choose == 4)
    {
      display();
    }
    else if (choose == 5)
    {
      exit(0);
    }
    else
    {
      while (1)
      {
        printf("Invalid Input, Choose again: ");
        scanf("%d", &choose);
        if (choose == 1)
        {
          enqueue();
          break;
        }
        else if (choose == 2)
        {
          dequeue();
        }
        else if (choose == 3)
        {
          peek();
        }
        else if (choose == 4)
        {
          display();
        }
        else if (choose == 5)
        {
          exit(0);
        }
        else
        {
          printf("Invalid Input, Choose again: ");
        }
      }
    }
  }
}