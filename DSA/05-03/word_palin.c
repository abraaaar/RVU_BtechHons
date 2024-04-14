#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct linkedlist
{
  char data;
  struct linkedlist *next;
  struct linkedlist *prev;
} doublyy;
doublyy *head;
doublyy *tail;

void insert(char wow);
void check_palin();
int main()
{
  char tempp[50];
  printf("Enter a word: ");
  scanf("%s", tempp);

  int i = 0;
  while (tempp[i] != '\0')
  {
    insert(tempp[i]);
    i++;
  }
  check_palin();
}

void insert(char wow)
{
  doublyy *newNode = (doublyy *)malloc(sizeof(doublyy));
  newNode->data = wow;
  if (tail == NULL)
  {
    tail = newNode;
    head = newNode;
    tail->prev = tail;
    tail->next = tail;
  }

  else
  {
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;
    tail->next = head;
    head->prev = tail;
  }
}

void check_palin()
{
  char temp1[20], temp2[20];
  int index1 = -1, index2 = -1;
  doublyy *current = head;
  do
  {
    index1++;
    temp1[index1] = current->data;
    current = current->next;
  } while (current != head);
  temp1[index1 + 1] = '\0';

  current = tail;
  do
  {
    index2++;
    temp2[index2] = current->data;
    current = current->prev;
  } while (current != tail);
  free(current);

  temp2[index2 + 1] = '\0';

  if (strcmp(temp1, temp2) == 0)
  {
    printf("\nWord is Palindrome");
  }

  else
  {
    printf("\nWord is not Palindrome");
  }
}