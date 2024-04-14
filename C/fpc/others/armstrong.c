#include <stdio.h>
void input();
void arm(int a);
void out(int sum, int a);


void input()
{
    int a;
    printf("Enter the number: ");
    scanf("%d",&a);
    arm(a);
}

void arm(int a)
{
    int b, sum=0;
    for (int i = a ; i != 0 ; i/=10)
    {
        b=i%10;
        sum = sum+(b*b*b);
    }
    out(sum, a);
   

}

void out(int sum, int a)
{
    if (sum==a)
    {
        printf("%d is an armstrong number.",a);
    }
    else
    {
        printf("%d is not armstrong.",a);
    }
}

int main()
{
   input();
}