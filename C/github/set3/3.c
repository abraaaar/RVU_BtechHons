#include <stdio.h>
#include <stdlib.h>
int input_number();
int is_prime(int n);
void output(int n, int result);

int main()
{
    int n=input_number();
    int r=is_prime(n);
    output(n,r);
}

int input_number()
{
    int num;
    printf("Enter the number: ");
    scanf("%d",&num);
    return num;
}

int is_prime(int n)
{
    if (n==0 || n==1)
    {
        printf("Neither Prime nor Composite");
        exit(0);
    }

    int res=1;
    for (int i=2; i<n; i++)
    {
        if (n%i==0)
        {
            res=0;
            break;
        }
    }
    return res;
}

void output(int n, int result)
{
    if (result==1)
    {
        printf("%d is prime",n);
    }
    else if(result==0)
    {
        printf("%d is not prime",n);
    }
}