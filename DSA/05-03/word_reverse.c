#include <stdio.h>
#include <stdlib.h>

typedef struct linkedlist
{
  char data;
  struct linkedlist *next;
  struct linkedlist *prev;
} doublyy;
doublyy *head;
doublyy *tail;

void insert(char wow);
void display();
void rev_display();
int main()
{
  char temp[50];
  printf("Enter a word: ");
  scanf("%[^\n]s", temp);

  int i = 0;
  while (temp[i] != '\0')
  {
    insert(temp[i]);
    i++;
  }

  display();

  rev_display();
}

void insert(char wow)
{
  doublyy *newNode = (doublyy *)malloc(sizeof(doublyy));
  newNode->data = wow;
  if (tail == NULL)
  {
    tail = newNode;
    tail->prev = NULL;
    tail->next = NULL;
    head = newNode;
  }

  else
  {
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    tail->next = NULL;
  }
}

void display()
{
  printf("\nEntered Word: ");
  doublyy *current = head;
  while (current != NULL)
  {
    printf("%c", current->data);
    current = current->next;
  }
  free(current);
}

void rev_display()
{
  printf("\nEntered word in Reverse: ");

  doublyy *current = tail;
  while (current != NULL)
  {
    printf("%c", current->data);
    current = current->prev;
  }
  printf("\n");
  free(current);
}
