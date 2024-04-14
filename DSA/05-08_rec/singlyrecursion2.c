#include <stdio.h>
#include <stdlib.h>

int count = 0;
int pos = 0;
int delete;
typedef struct singlylinkedlist
{
  int data;
  struct singlylinkedlist *next;
} singly;
singly *head = NULL;
singly *tail = NULL;



void insert(int num)
{
  if (num==0)
  {
    printf("Insertion complete.\n");
  }
  else
  {
    num--;

    singly *node = malloc(sizeof(singly));
    printf("Enter data: ");
    scanf("%d", &node->data);
    node->next = NULL;

    if (head == NULL)
    {
      head = node;
      tail = node;
    }
    else 
    {
      tail->next = node;
      tail = node;
    }

    insert(num);
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

void search_num(int num, singly *node)
{
  pos++;
  if (node == NULL)
  {
    if (count == 0)
    {
      printf("%d not in the list",num);
      return;
    }
    printf("\nFrequency: %d",count);
    return;
  }
  else if (num == node->data)
  {
    count++;
    printf("\nAt position: %d\t\tAt address: %p",pos, (void *)node);
  }
  search_num(num, node->next);
}


void deletion(int num)
{
  if (head==NULL)
  {
    printf("\nLinked list is empty");
    return;
  }
  else
  {
    singly *temp = head;
    if (num == 1)
    {
      printf("\nDeleted node: %d", temp->data);
      head = NULL;
      tail = NULL;
      return;
    }
    int i = 3;
    while (i<=num)
    {
      temp = temp->next;
      i++;
    }
    printf("\nDeleted node: %d", temp->next->data);
    temp->next = NULL;
    tail = temp;
    delete--;
    if (delete==0)
    {
      return;
    }
    deletion(--num);
  }
}


int main()
{
  int SIZE, search;
  printf("Enter the total nodes you want to make : ");
  scanf("%d",&SIZE);
  insert(SIZE);
  printf("\nSingly linked list: ");
  display(head);
  
  printf("\n\nEnter number to search for: ");
  scanf("%d",&search);
  search_num(search, head);

  printf("\n\nHow many nodes you want to delete: ");
  scanf("%d",&delete);
  deletion(SIZE);

  if (head!=NULL)
  {
    printf("\nUpdated linked list: ");
    display(head);
  }
  else
  {
    printf("\nLinked list has become empty");
  }
}
  