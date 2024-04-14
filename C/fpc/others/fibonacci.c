#include <stdio.h>
int main()
{
  int a, first=0, second=1, g;
  while (1){
  printf("****FIBONACCI SERIES****\n");
  printf("Enter the number of items you want: ");
  int scan=scanf("%d",&a);
  if (a>0){
    break;
  }else{
    printf("Invalid Input, Try Again\n");
    }
           }
  if (a==1){
    printf("The first element of Fibonacci series is 0");
    return 0;
  }
  else if (a==2){
    printf("The first two elements of Fibonacci series are 0,1");
    return 0;
    }
  printf("The first %d elements of Fibonacci series are 0, 1 ",a);
  
  for (int i=2;i<a;i++)
  {
    g=first+second;
    first=second;
    second=g;
    printf(", %d",g);  
  }
}