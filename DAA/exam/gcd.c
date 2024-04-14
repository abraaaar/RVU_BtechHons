#include <stdio.h>
#include <stdlib.h>


void HCF(long long a, long long b)
{
  long long divident = a>b?a:b;
  long long divisor = a>b?b:a;
  long long rem = divident%divisor;
  if (rem == 0)
  {
    printf("%lld", divisor);
    return;
  }
  else 
  {
    HCF(divisor, rem);
  }
}


int main()
{
  long long n1, n2;
  scanf("%lld %lld",&n1,&n2);
  HCF(n1, n2);
}
