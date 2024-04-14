#include <stdio.h>
void input_n_and_r(int *n, int *r);
int nCr(int n, int r);
void output(int n, int r, int result);

int main()
{
    int n, r;
    input_n_and_r(&n, &r);
    int res=nCr(n, r);
    output(n,r,res);
}

void input_n_and_r(int *n, int *r)
{
    printf("Enter n: ");
    scanf("%d",n);
    printf("Enter r: ");
    scanf("%d",r);
}

int nCr(int n, int r)
{
    int fact_n=1, fact_r=1, fact_nr=1;
    for (int i=n; i>=2; i--)
    {
        fact_n*=i;
    }

    for (int i=r; i>=2; i--)
    {
        fact_r*=i;
    }

    for (int i=(n-r); i>=2; i--)
    {
        fact_nr*=i;
    }

    return (fact_n/(fact_nr*fact_r));
}

void output(int n, int r, int result)
{
    printf("For n = %d and r = %d, nCr = %d",n,r,result);
}