#include <stdio.h>
int input_array_size();
void init_array(int n, int a[]);
void erotosthenes_sieve(int n, int a[]);
void output(int n, int a[]);

int main()
{
    int s=input_array_size();
    int a[s], prime[s];
    init_array(s,a);
    erotosthenes_sieve(s,a);
    output(s,a);
}

int input_array_size()
{
    int size;
    printf("Enter the nth term: ");
    scanf("%d",&size);
    return size;
}

void init_array(int n, int a[])
{
    a[0]=2;
    for (int i=1; i<n; i++)
    {
        a[i]=i+2;
    }
    
}

void erotosthenes_sieve(int n, int a[])
{
    for ( int i = 0 ; i<n; i++)
    {
        if (a[i]==0)
        {
            continue;
        }
        for (int k=i+1; k<n; k++)
        {
            if (a[k]%a[i] == 0)
            {
                a[k]=0;
            }
        }
        for (int j=2; j<a[i]; j++)
        {
            if (a[i]%j == 0)
            {
                a[i]=0;
                break;
            }
        }
    }
}

void output(int n, int a[])
{
    printf("Prime numbers from 2 till %d are: %d",n,a[0]);
    for (int i=1; i<n; i++)
    {
        if (a[i] != 0)
        {
            printf(", %d",a[i]);
        }
    }
}