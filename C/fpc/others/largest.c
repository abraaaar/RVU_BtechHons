#include <stdio.h>
int input();
int compare (int a, int b, int c);   
void output (int largest);


int main()
{
  input();
}


int input()
{
  int num1, num2, num3;
  printf("Enter first number:");
  scanf("%d",&num1);
  printf("Enter second number:");
  scanf("%d",&num2);
  printf("Enter third number:");
  scanf("%d",&num3);
  compare(num1,num2,num3);
}


int compare (int a, int b, int c)
{
  int largest;
  if (a>b && a>c)
  {
    largest=a;
  }

  else if (b>a && b>c)
  {
    largest=b;
  }  

  else if (c>a && c>b)
  {
    largest=c;
  }

  else if ((c==a && c>b) || (a==b && a==c))
  {
    largest=c;

  }

  else if ((b==c && b>a) || (b==a && b>c))
  {
    largest=b;
  }
  output(largest);
}




void output (int largest)
{
        printf("The largest number is %d",largest); 
}



