#include <stdio.h>
#include <stdlib.h>

typedef struct linkedlist
{
  int data;
  struct linkedlist *next;
} singlycirc;
singlycirc *head;
singlycirc *tail;
int count = 0;

void beginning(int wow);
void specific(int wow);
void end(int wow);
void del_beginning();
void del_specific();
void del_end();
void display();
void search();

int main()
{
  int choose, d;
  while (1)
  {
    printf("\n\n\n\n\nChoose For Insertion:\n\t\t  1 - at the beginning\t  2 - at a specific node\t  3 - at the end\n\nChoose For deletion:\n\t\t  4 - at the beginning\t  5 - at a specific node\t  6 - at the end\n\nChoose special:\n\t\t  7 - display list\t  8 - Search for an Item in the list\t  9 - EXIT THE PROGRAM  :  ");
    scanf("%d", &choose);

    if (choose == 1 || choose == 2 || choose == 3)
    {
      printf("\n\nEnter data to be inserted: ");
      scanf("%d", &d);
    }
    if (choose == 1)
    {
      beginning(d);
    }
    else if (choose == 2)
    {
      specific(d);
    }
    else if (choose == 3)
    {
      end(d);
    }
    else if (choose == 4)
    {
      del_beginning();
    }
    else if (choose == 5)
    {
      del_specific();
    }
    else if (choose == 6)
    {
      del_end();
    }
    else if (choose == 7)
    {
      display();
    }
    else if (choose == 8)
    {
      search();
    }
    else if (choose == 9)
    {
      exit(0);
    }
    else
    {
      printf("Invalid Input, Try Again");
    }
  }
}

void beginning(int wow)
{
  count++;
  singlycirc *newNode = (singlycirc *)malloc(sizeof(singlycirc));
  newNode->data = wow;
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    head->next = head;
  }
  else
  {
    newNode->next = head;
    head = newNode;
  }
}

void specific(int wow)
{
  singlycirc *newNode = (singlycirc *)malloc(sizeof(singlycirc));
  newNode->data = wow;
  if (head == NULL)
  {
    head = newNode;
    tail = newNode;
    head->next = head;
    printf("\nThe linkedlist is empty so specific position is 1");
  }

  else
  {
    int num, i = 2;
    printf("Choose a specific position from 1 to %d: ", count + 1);
    scanf("%d", &num);

    if (num == 1)
    {
      newNode->next = head;
      head = newNode;
    }

    else if (num == count + 1)
    {
      newNode->next = head;
      tail->next = newNode;
      tail = newNode;
    }

    else
    {
      singlycirc *temp = head;
      while (i < num)
      {
        temp = temp->next;
        i++;
      }
      newNode->next = temp->next;
      temp->next = newNode;
    }
  }
  count++;
}

void end(int wow)
{
  count++;
  singlycirc *newNode = (singlycirc *)malloc(sizeof(singlycirc));
  newNode->data = wow;
  if (tail == NULL)
  {
    tail = newNode;
    head = newNode;
    tail->next = head;
  }

  else
  {
    tail->next = newNode;
    tail = newNode;
    tail->next = head;
  }
}

void del_beginning()
{
  if (head == NULL)
  {
    printf("\nThe linked list is empty");
  }
  else
  {
    printf("Deleted Node: %d", head->data);
    count--;
    if (count == 0)
    {
      printf("\nThe linked list had become empty now");
    }
    else
    {
      head = head->next;
    }
  }
}

void del_specific()
{

  if (head == NULL)
  {
    printf("\nThe linked list is empty");
  }
  else if (count == 1)
  {
    printf("Deleted Node: %d", head->data);
    head = NULL;
    tail = NULL;
    count--;
    printf("\nThe linked list had become empty now");
  }
  else
  {
    int num;
    printf("\nChoose a specific position from 1 to %d to delete from: ", count);
    scanf("%d", &num);

    if (num == 1)
    {
      printf("Deleted Node: %d", head->data);
      head = head->next;
      count--;
    }
    else if (num == count)
    {
      printf("Deleted Node: %d", tail->data);
      count--;
      singlycirc *temp = head;
      while (temp->next->next != head)
      {
        temp = temp->next;
      }
      tail = temp;
      tail->next = head;
    }
    else
    {
      int i = 2;
      singlycirc *temp = head;
      while (i < num)
      {
        temp = temp->next;
        i++;
      }
      printf("Deleted Node: %d", temp->next->data);
      temp->next = temp->next->next;
      count--;
    }
  }
}

void del_end()
{
  if (tail == NULL)
  {
    printf("\nThe linked list is empty");
  }
  else
  {
    printf("Deleted Node: %d", tail->data);
    count--;
    if (count == 0)
    {
      printf("\nThe linked list had become empty now");
    }
    else
    {
      singlycirc *temp = head;
      while (temp->next->next != head)
      {
        temp = temp->next;
      }
      tail = temp;
      tail->next = head;
    }
  }
}

void display()
{
  if (head == NULL)
  {
    printf("\nThe linked list is empty");
  }
  else
  {
    printf("\nLinked List: ");
    singlycirc *current = head;


    do
    {
        printf("%d ", current->data);
        current = current->next;
    } while (current != head);


    // while (current != NULL)
    // {
    //   printf("%d ", current->data);
    //   current = current->next;
    //   if (current == head)
    //   {
    //     break;
    //   }
    // }
  }
}

void search()
{
  if (head == NULL)
  {
    printf("The linked list is empty");
  }

  else
  {
    int num, posi[count], address[count], index = 0, i = 1;
    printf("Enter the number to search: ");
    scanf("%d", &num);
    singlycirc *wow = head;

    while (wow != NULL)
    {
      if (wow->data == num)
      {
        posi[index] = i;
        address[index] = (int)wow;
        index++;
      }
      i++;
      wow = wow->next;
      if (wow == head)
      {
        break;
      }
    }

    if (index > 0)
    {
      printf("\nNumber of times %d appears in the linked list: %d", num, index);
      for (int i = 0; i < index; i++)
      {
        printf("\nAt Position: %d and Address: %d", posi[i], address[i]);
      }
    }
    else
    {
      printf("The number %d does not appear in the linked list", num);
    }
  }
}