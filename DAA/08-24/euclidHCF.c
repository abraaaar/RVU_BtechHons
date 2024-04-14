#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void delay(int milliseconds)
{
  clock_t start_time = clock();
  while ((clock() - start_time) * 1000 / CLOCKS_PER_SEC < milliseconds)
    ;
}

void HCF(long long a, long long b)
{
  delay(1000);
  long long divident = a>b?a:b;
  long long divisor = a>b?b:a;
  long long rem = divident%divisor;
  if (rem == 0)
  {
    printf("\nGCD = %lld", divisor);
    return;
  }
  else 
  {
    HCF(divisor, rem);
  }
}


int main()
{
  clock_t t1;
  t1 = clock();
  HCF(56, 24);
  t1 = clock() - t1;
  double time1 = ((double)t1)/ CLOCKS_PER_SEC;
  
  delay(1000);
  
  clock_t t2;
  t2 = clock();
  HCF(5600000000, 240000000);
  t2 = clock() - t2;
  double time2 = ((double)t2)/ CLOCKS_PER_SEC;
  
  printf("\nTime take for 56, 24 : %f seconds\nTime take for 5600000000, 240000000 : %f seconds",time1, time2);
}

// import matplotlib.pyplot as plt
// x = [4,5,6,7,8,9,10]
// y = [1,2,3,4,5,10,11]
// plt.plot(x,y, marker = 'o')
// plt.title('Hello')
// plt.xlabel('x')
// plt.ylabel('y')
// plt.show()
