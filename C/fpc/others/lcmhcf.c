#include <stdio.h>

int lcm(int a, int b)
{
    int lcm;
    for ( int i = 1 ;i<=a*b; i++ )
    {   
        if (i%a == 0 && i%b == 0)
        {
            lcm=i;
            break;
        }
    }
    return lcm;
}

int hcf(int a, int b)
{
    int hcf,lar=a>b?a:b;
    for (int i=lar;;i--)
    {
        if (a%i==0 && b%i==0)
        {
            hcf=i;
            break;
        }
    }
    return hcf;
}


int main()
{
    int n1, n2;
    printf("Enter first number: ");
    scanf("%d",&n1);
    printf("Enter second number: ");
    scanf("%d",&n2);
    int l=lcm(n1,n2), h=hcf(n1,n2);
    printf("\nThe LCM of %d and %d is %d",n1,n2,l);
    printf("\nThe HCF of %d and %d is %d",n1,n2,h);
}