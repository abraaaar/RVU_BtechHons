#include <stdio.h>
#include <stdlib.h>


int * merge(int initial, int middle , int final, int array[])
{
  int ini2 = middle + 1; 
  int new_array[final-initial+1];
  int k = 0;
  for (int i = 0; i < middle; i)
  {
    if (array[initial] <= ini2)
    {
      new_array[k++] = array[initial++];
    }
    else
    {
      new_array[k++] = array[ini2++];
    }
  }
}

void mergesort(int initial, int final, int array[])
{
  if (initial < final)
  {
    int mid = (initial + final) / 2;
    mergesort(initial, mid, array);
    mergesort(mid+1, final, array);
    merge(initial, mid, final, array); 
  }
}

int main()
{
  int n;
  printf("Enter the number of elements in the array: ");
  scanf("%d",&n);
  int array[n];
  for (int i = 0; i<n; ++i)
  {
    printf("Enter in array: ");
    scanf("%d",array[i]);
  }
  mergesort(0, n, array);


}