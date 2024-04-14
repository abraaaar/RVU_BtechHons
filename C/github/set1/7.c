#include <stdio.h>

int input_n();
int sum_n_nos(int n);
void output(int n, int sum);

int main()
{
    input_n();
}

int input_n()
{
    int n;
    printf("Enter which number you want sum upto: ");
    scanf("%d",&n);
    sum_n_nos(n);
}

int sum_n_nos(int n)
{
    int s=(n*(n+1))/2;
    output(n, s);
}

void output(int n, int sum)
{
    printf("Sum of first %d natural numbers = %d",n,sum);
}