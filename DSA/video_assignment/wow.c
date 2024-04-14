#include <stdio.h>
#include <stdlib.h>

#define S 12

char usn[S];
int top=-1;

void push();
void pop();
void display();

int main()
{
  int num;
  while (1)
  {
    printf("\nEnter 1 for push, 2 for pop, 3 for display, 4 for exit: ");
    scanf("%d",&num);

    if (num == 1)
    {
      push();
    }

    else if (num == 2)
    {
      pop();
    }

    else if (num == 3)
    {
      display();
    }

    else if (num == 4)
    {
      exit(0);
    }
    else 
    {
      printf("\nInvalid input try again");
    }

  }

}

void push()
{
  if (top == S - 1)
  {
    printf("\nStack overflow");
  }
  else
  {
    top++;
    printf("\nEnter the character you want to push: ");
    scanf(" %c",&usn[top]);
  }
}
void pop()
{
  if (top == -1)
  {
    printf("\nStack underflow.");
  }
  else
  {
    printf("Popped element: %c",usn[top]);
    top--;
  }
}

void display()
{
  printf("\nUSN : ");
  for (int i=0; i<=top; i++)
  {
    printf("%c",usn[i]);
  }
}