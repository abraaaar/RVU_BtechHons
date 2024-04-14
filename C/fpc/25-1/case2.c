#include <stdio.h>
int input();
int sum_num(int a, int b);
void output(int a, int b, int sum);

int main()
{
    int n1=input(),n2=input();
    sum_num(n1,n2);
}

int input()
{
    int n;
    printf("Enter first number: ");
    scanf("%d",&n);
    return n;
}

int sum_num(int a, int b)
{
    int s;
    s=a+b;
    output(a,b,s);
}

void output(int a, int b, int sum)
{
    printf("The sum of %d and %d is %d",a,b,sum);
}