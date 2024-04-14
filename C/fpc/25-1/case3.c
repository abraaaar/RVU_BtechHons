#include <stdio.h>
void input();
void sum_num(int a, int b);
void output(int a, int b, int sum);

int main()
{
    input();
}

void input()
{
    int n1,n2;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    sum_num(n1,n2);
}

void sum_num(int a, int b)
{
    int s;
    s=a+b;
    output(a,b,s);
}

void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d",a,b,sum);
}