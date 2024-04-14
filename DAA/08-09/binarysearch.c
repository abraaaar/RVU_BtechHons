#include <stdio.h>
#include <stdlib.h>

int val = -1;
void binarysearch(int array[], int num, int beg, int end)
{
  if (beg == end)
  {
      if (array[beg] == num)
      {
        val = beg;
      }
      return;
  }
  int mid = (beg + end)/2;
  printf("\nMiddle = %d",mid);
  if (array[mid] == num)
  {
    val = mid;
    return;
  }
  else if (array[mid] > num)  
  { 
    binarysearch(array, num, beg, mid-1);
  }
  else
  {
    binarysearch(array, num, mid+1, end);
  }
  
}

int main()
{
  int size, num;
  printf("Enter the size of the array: ");
  scanf("%d",&size);
  int array[size];
  printf("\nENTER ARRAY IN ASCENDING ORDER\n");
  for (int i = 0; i < size; ++i)
  {
    printf("At index %d: ",i);
    while (1)
    {
      scanf("%d",&array[i]);
      if (i==0)
      {
        break;
      }
      if (array[i] < array[i-1])
      {
        printf("Invalid Input. Try again at index %d: ",i);
        continue;
      }
      break;
    }
  }

  printf("Enter the number to search: ");
  scanf("%d",&num);
  binarysearch(array, num, 0, size - 1);
  if (val == -1)
  {
    printf("\nNOT FOUND");
  }
  else 
  {
    printf("\nFOUND AT INDEX %d",val);
  }
}