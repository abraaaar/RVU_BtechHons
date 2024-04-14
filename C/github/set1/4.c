#include <stdio.h>
int input();
int add(int a, int b, int *sum);
void output(int a, int b, int sum);

int main()
{
    input();
}

int input()
{
    int n1,n2,sum;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    add(n1,n2,&sum);
    output(n1,n2,sum);
}

int add(int a, int b, int *sum)
{
    *sum=a+b;
}

void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d",a,b,sum);
}