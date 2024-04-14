#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define size 5

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
  int array[] = {1,2,3,4,5};
  printf("\nInput Array: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }
  clock_t t;
  t = clock();
  bubblesort(array, size);
  t = clock() - t;
  double best = ((double)t)/ CLOCKS_PER_SEC;
  printf("\nBEST CASE Sorted Array: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\nNumber of swaps: %d\t Comparisons: %d", swap, comparisons);
  
  int array2[] = {5,4,3,2,1};
  printf("\nInput Array: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array2[i]);
  }
  t = clock();
  bubblesort(array2, size);
  t = clock() - t;
  double worst = ((double)t)/ CLOCKS_PER_SEC;
  printf("\nWorst CASE Sorted Array: ");
  for (int i = 0; i < size; i++)
  {
    printf("%d ", array[i]);
  }
  printf("\nNumber of swaps: %d\t Comparisons: %d", swap, comparisons);
  return 0;
}
