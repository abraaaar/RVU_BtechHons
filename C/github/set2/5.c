#include <stdio.h>
int input();
int find_gcd(int a, int b);
void output(int a, int b, int gcd);

int main()
{
    input();
}

int input()
{
    int n1,n2;
    printf("Enter 1st number: ");
    scanf("%d",&n1);
    printf("Enter 2nd number: ");
    scanf("%d",&n2);
    find_gcd(n1,n2);
}

int find_gcd(int a, int b)
{
    int l;
    for (int i=(a>b)?b:a; i>=1; i--)
    {
        if (a%i==0 && b%i==0 )
        {
            l=i;
            break;
        }
    }
    output(a,b,l);
}

void output(int a, int b, int gcd)
{
    printf("The Greatest Common Divisor of %d and %d is %d",a,b,gcd);
}