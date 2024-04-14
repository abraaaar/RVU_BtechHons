#include <stdio.h>

int main()
{
   int num, sum=1, i=2;
   printf("Enter the number: ");
   scanf("%d",&num);
   printf("The factorial of %d is: %d ",num,num);

   while(i<=num)
   {
    sum=sum*(num);
    printf("x %d ",num-1);
    num--;
   }
   printf("= %d",sum);
}  
