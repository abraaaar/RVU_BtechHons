#include <stdio.h>
#include <stdlib.h>

struct node {
    int data;
    struct node *next;
};

struct node *head = NULL;
struct node *tail = NULL;

void insert(int data)
{
  struct node *temp =  malloc(sizeof(struct node));
  temp->data = data;
  if (head == NULL)
  {
    head = temp;
    tail = temp;
    temp->next = NULL;
  }
  //beginning
  // else 
  // {
  //   temp->next = head;
  //   head = temp;
  // }

  //end
  else
  {
    tail->next = temp;
    tail = temp;
  }
}

int main()
{
  int data, num_nodes;
  printf("how many nodes: ");
  scanf("%d", &num_nodes);
  for (int i = 1; i <= num_nodes; i++)
  {
    printf("Enter :");
    scanf("%d", &data);
    insert(data);
  }

  while (head != NULL)
  {
    printf("%d ", head->data);
    head = head->next;
  }
}