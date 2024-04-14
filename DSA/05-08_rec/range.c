#include <stdio.h>
#include <stdlib.h>

int sum = 0;
void range_sum(int a, int b)
{
  if (a==b)
  {
    sum+=a;
    return;
  }
  sum+=a;
  range_sum(a+1,b);
}
int main()
{
  printf("Enter Range(x-y): ");
  int m,n;
  scanf("%d-%d",&m,&n);
  range_sum(m,n);
  printf("Sum from %d-%d is %d",m,n,sum);
}