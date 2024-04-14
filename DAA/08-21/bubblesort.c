#include <stdio.h>
#include <stdlib.h>

int comparisons = 0, swap = 0;

void bubblesort(int arr[], int num)
{
  int sorted;
  while (1)
  {
    sorted = 0; 
    for (int i = 0; i < num-1; i++)
    {
      comparisons++;
      if (arr[i] > arr[i+1])
      {
        swap++;
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
  int size;
  printf("Enter the size of the array: ");
  scanf("%d",&size);

  int array[size];
  for (int i = 0; i < size; i++)
  {
    printf("At index %d: ",i);
    scanf("%d",&array[i]);
  }


  printf("Input Array: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }  
  bubblesort(array, size);

  printf("\nSorted Array: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }

  printf("\nNumber of swaps: %d\t Comparisons: %d", swap, comparisons);
  return 0;
}
