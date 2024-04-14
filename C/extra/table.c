#include <stdio.h>
int main(){
  printf("Enter the number you want a table of: ");
  int num1, a=scanf("%d",&num1);
  printf("Enter the no. of multiples: ");
  int num2, b=scanf("%d",&num2);
  printf("\n");
  printf("\n*****Multiplication table of %d*****",num1);
  for(int i=1; i<=num2; i++){
    int mul=num1*i;
    printf("\n");
     printf("%d x %d = %d ",num1,i,mul);
  }
}