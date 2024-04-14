#include <stdio.h>
#include <stdarg.h>

#define NUM 5

void func(int wow, ...);

int main()
{
  int num;
  printf("Enter the number of items: ");
  scanf("%d",&num);
  int arr[num];
  for(int i=0;i<num;i++)
  {
    printf("Enter the number %d of array: ",i+1);
    scanf("%d",&arr[i]);
  }

  func(num, arr);
  return 0;
}

void func(int wowo, ...)
{
  printf("The sum of the entered numbers is: ");
  va_list wow;
  va_start(wow, wowo);
  int sum=0;
  for (int i=0; i<wowo; i++)
  {
    int temp=va_arg(wow,int);
    sum+=temp;
  }
  printf("%d",sum);
  va_end(wow);
}