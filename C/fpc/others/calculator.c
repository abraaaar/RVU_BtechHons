//Write a program in C which is a Menu-Driven Calculator to perform a simple calculations of addition, subtraction, multiplication, division. Take the choice of operation as an input from the user and the inputs for operation.
#include <stdio.h>
int main(){
  int num1;
  printf("Enter first number:");
  scanf("%d",&num1);

  char ope;
  printf("\n**Choose Operation**\n+\n-\nx\n/   : ");
  scanf(" %c",&ope);
  if (ope!='+' && ope!='-' && ope!='*' && ope!='/'){
    printf("Invalid operand.");
  }
  int num2;
  printf("Enter second number:");
  scanf("%d",&num2);
  if (ope=='+')
    printf("= %d",num1+num2);
  if (ope=='-')
    printf("= %d",num1-num2);
  if (ope=='*')
    printf("= %d",num1*num2);
  if (ope=='/')
    printf("= %d",num1/num2);
}