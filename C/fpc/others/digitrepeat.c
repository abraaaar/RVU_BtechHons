#include <stdio.h>

int main()
{ 
   int num, rem, arr[10]={0};
   printf("Enter the number: ");
   scanf("%d",&num);
   while (num>0)
   {
      rem=num%10;
      if (arr[rem]==1)
      {
         break;
      }

      arr[rem]=1;
      num/=10;
   }
   if (num>0)
   {
      printf("Yes the digits are repeated");
   }
   else if (num==0)
   {
      printf("No the digits are not repeated");
   }
}