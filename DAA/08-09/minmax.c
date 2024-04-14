#include <stdio.h>



int findmin(int a[], int size)
{
  int min = 0;
  for (int i = 1; i <= size - 1; ++i)
  {
    if (a[i] < a[min])
    {
      min = i;
    }
  }
  return a[min];
}

int findmax(int a[], int size)
{
  int max = 0;
  for (int i = 1; i <= size - 1; ++i)
  {
    if (a[i] > a[max])
    {
      max = i;
    }
  }
  return a[max];
}

int main()
{
  int s;
  printf("Enter the size of array: ");
  scanf("%d", &s);
  int a[s];
  for (int i = 0; i<s; i++)
  {
    printf("Enter element %d: ", i+1);
    scanf("%d", &a[i]);
  }

  printf("\nMax of array = %d\nMin of array = %d", findmax(a, s), findmin(a, s));

  return 0;
}

