#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define FACTORIAL_LEN 100000

int main() 
{
  int num;
  printf("Enter the number: ");
  scanf("%d",&num);
  char factorial[FACTORIAL_LEN] = "1";
  int len = 1;

  for (int i = 2; i <= num; i++) 
  {
    int carry = 0;
    for (int j = 0; j < len; j++)
    {
      int digit = factorial[j] - '0';
      factorial[j] = ((digit * i) + carry) % 10 + '0';
      carry = ((digit * i) + carry) / 10;
    }
    
    while (carry > 0) 
    {
      factorial[len] = carry % 10 + '0';
      carry /= 10;
      len++;
    }

  }

  printf("%d! = ",num);
  for (int i = len - 1; i >= 0; i--) 
  {
    printf("%c", factorial[i]);
  }

}  