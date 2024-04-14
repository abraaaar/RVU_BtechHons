#include <stdio.h>
void input();
int sum_num(int a, int b);
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
    int s=sum_num(n1,n2);
    output(n1,n2,s);
}

int sum_num(int a, int b)
{
    return a+b;
}

void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d",a,b,sum);
}