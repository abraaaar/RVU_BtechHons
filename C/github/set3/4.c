#include <stdio.h>
#include <stdlib.h>
int input();
int find_fibo(int n);
void output(int n, int fibo);

int main()
{
    int n=input();
    int f=find_fibo(n);
    output(n,f);
}

int input()
{
    int n;
    printf("Enter the nth number you want in Fibonacci Series: ");
    scanf("%d",&n);
    
    if (n<=0)
    {
        printf("Invalid Input");
        exit(0);
    }
    return n;
}

int find_fibo(int n)
{
    if (n==1)
    {
        return 0;
    }
    if (n==2)
    {
        return 1;
    }
    return find_fibo(n-1)+find_fibo(n-2);
}

void output(int n, int fibo)
{
    printf("The %d number in FIbonacci Series is %d",n,fibo);
}