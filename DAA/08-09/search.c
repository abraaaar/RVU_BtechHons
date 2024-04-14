#include <stdio.h>

void findnum(int a[], int size, int num)
{
  int index = 0 ,found = 0, count = 0;
  for (int i = 0; i < size; ++i)
  {
    count++;
    if (a[i] == num)
    {
      index = i;
      found = 1;
      break;
    }
  }
  if (found == 0)
  {
    printf("\nNumber %d not found",num);
  }
  else
  {
    printf("\nNumber %d found at index %d",num,index);
  }
  printf("\nNumber of comparisons = %d",count);
}
int main()
{
  int s, n;
  printf("Enter the size of array: ");
  scanf("%d", &s);
  int a[s];
  for (int i = 0; i<s; i++)
  {
    printf("Enter element %d: ", i+1);
    scanf("%d", &a[i]);
  }
  printf("enter number to be searched: ");
  scanf("%d", &n);

  findnum(a,s,n);

}