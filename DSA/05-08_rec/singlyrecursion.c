#include <stdio.h>
#include <stdlib.h>

typedef struct singlylinkedlist
{
  int data;
  struct singlylinkedlist *next;
} singly;
singly *head = NULL;
singly *tail = NULL;

void insert_beg()
{
  singly *node = malloc(sizeof(singly));
  printf("Enter data: ");
  scanf("%d", &node->data);
  if (head == NULL)
  {
    node->next = NULL;
    head = node;
    tail = node;
  }
  else
  {
    node->next = head;
    head = node;
  }
  int wow;
  printf("Do you want to end insertion at beginning : \n1. YES\t2.NO :  ");
  scanf("%d", &wow);
  if (wow == 1)
  {
    return;
  }
  else
  {
    insert_beg();
  }
}

void insert_end()
{
  singly *node = malloc(sizeof(singly));
  printf("Enter data: ");
  scanf("%d", &node->data);
  if (tail == NULL)
  {
    tail = node;
    tail->next = NULL : head = node;
  }
  else
  {
    tail->next = node;
    node->next = NULL;
    tail = node;
  }
  int wow;
  printf("Do you want to end insertion at end : \n1. YES\t2.NO :  ");
  scanf("%d", &wow);
  if (wow == 1)
  {
    return;
  }
  else
  {
    insert_end();
  }
}

void display(singly *wow)
{
  if (wow == NULL)
  {
    return;
  }
  else
  {
    printf("%d ", wow->data);
    display(wow->next);
  }
}

int main()
{
  int choose;
  while (1)
  {
    printf("\n\nChoose For Insertion:\n\t\t  1 - at the beginning\t  2 - at a specific node\t  3 - at the end\n\n\t\t  4 - display list\t  5 - Search for an Item in the list\t  6 - EXIT THE PROGRAM  : ");
    scanf("%d", &choose);

    if (choose == 1)
    {
      insert_beg();
    }
    else if (choose == 3)
    {
      insert_end(d);
    }
    else if (choose == 4)
    {
      display(head);
    }
    else if (choose == 9)
    {
      exit(0);
    }
    else
    {
      printf("Invalid Input, Choose again : ");
      while (1)
      {
        scanf("%d", &choose);

        if (choose == 1)
        {
          insert_beg();
          break;
        }
        else if (choose == 3)
        {
          insert_end(d);
          break;
        }
        else if (choose == 4)
        {
          display(head);
          break;
        }
        else if (choose == 9)
        {
          exit(0);
        }
        else
        {
          printf("Invalid Input, Choose again : ");
        }
      }
    }
  }
}
