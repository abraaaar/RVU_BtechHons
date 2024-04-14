#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char s[50], a[50];
typedef struct linkedlist
{
  int data;
  struct linkedlist *next;
  struct linkedlist *prev;
} doublyy;
doublyy *head = NULL;
doublyy *tail = NULL;

void insert(char c)
{
  doublyy *newNode = (doublyy *)malloc(sizeof(doublyy));
  newNode->data = c;
  if (head == NULL)
  {
    head = newNode;
    head->prev = NULL;
    head->next = NULL;
    tail = newNode;
  }
  else
  {
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    tail->next = NULL;
  }
}

int check_palin()
{
  int i = 0;
  while (tail != NULL)
  {
    a[i] = tail->data;
    tail = tail->prev;
    i++;
  }
  a[i] = '\0';
  if (strcmp(a, s) == 0)
  {
    return 1;
  }
  else 
  {
    return 0;
  }
}

int main()
{
  printf("Word: ");
  scanf("%s",s);
  int i = 0;
  while (s[i] != '\0')
  {
    insert(s[i]);
    i++;
  }

  if (check_palin())
  {
    printf("True");
  }
  else 
  {
    printf("False");
  }
}