#include <stdio.h>
#include <stdlib.h>

void bubblesort(int arr[], int num)
{
  int sorted;
  while (1)
  {
    sorted = 0; 
    for (int i = 0; i < num-1; i++)
    {
      if (arr[i] > arr[i+1])
      {
        sorted = 1;
        int temp = arr[i];
        arr[i] = arr[i + 1];
        arr[i + 1] = temp;
      } 
    }
    if (sorted == 0)
    {
      break;
    }
    num--;
  }
  
}

int main()
{
  int s1, s2;
  printf("Enter array one size: ");
  scanf("%d", &s1);
  printf("Enter array two size: ");
  scanf("%d", &s2);

  int a1[s1+s2], a2[s2];

  printf("ARRAY 1 INPUT\n");
  for (int i = 0; i < s1; i++)
  {
    printf("At index %d: ",i);
    scanf("%d", &a1[i]);
  }
  printf("\n\nARRAY 2 INPUT\n");
  for (int i = 0; i < s2; i++)
  {
    printf("At index %d: ",i);
    scanf("%d", &a2[i]);
  }

  int last = s1;
  for (int i = 0; i<s2; i++, last++)
  {
    a1[last] = a2[i];
    // printf("\nMerged last = %d\ti = %d\ta2 %d = \t a1 = %d",last, i,  a2[i], a1[last]);
  }

  bubblesort(a1, s1+s2);

  printf("\n\nSorted Merged Array is : ");
  for (int i = 0; i < s1 + s2; i++)
  {
    printf("%d ",a1[i]);
  }
}