#include <stdio.h>
#include <stdlib.h>


int  str_size;
int look_size;
void iteration(char* str, char*t)
{
  if (look_size > str_size)
  {
    printf("\nNO\n");
    exit(0);
  }
    int j = -1;
    int k = 0;
    int match = 0;
    for (int i = 0; i<str_size; ++i)
    {
      if (k>=look_size)
      {
        break;
      }
      if (t[k] == str[i])
      {
        match = 1;
        k++;
      }
      else
        match = 0;

      if (match == 0)
      {
        j++; 
        i = j;
        k=0;
      }
    }

    if (match == 1)
    {
      printf("\nFound\n");
    }
    else
    {
      printf("Not Found");
    }
  }


int main()
{
  printf("Enter size of the main string: ");
  scanf("%d",&str_size);

  printf("Enter the main string: ");
  char str[str_size];
  scanf("%s",str);
  printf("Enter size of the sub-string: ");
  scanf("%d",&look_size);
  char look[look_size];
  printf("Enter the sub string: ");
  scanf("%s",look);

  iteration(str, look);

}