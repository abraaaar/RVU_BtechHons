#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_n_array(int n, int a[n]);
void output(int n, int a[n], int sum);

int main()
{
    input_array_size();
}

int input_array_size()
{
    int n;
    printf("Enter array size: ");
    scanf("%d",&n);
    int a[n];
    input_array(n,a);
    sum_n_array(n,a);

}

void input_array(int n, int a[n])
{
    for (int i=0; i<n; i++)
    {
        printf("Enter the element %d of array: ",i+1);
        scanf("%d",&a[i]);
    }
    
}

int sum_n_array(int n, int a[n])
{
    int sum=0;
    for (int i=0; i<n; i++)
    {
        sum+=a[i];
    }
    output(n,a,sum);
}

void output(int n, int a[n], int sum)
{
    printf("%d",a[0]);
    for (int i=1; i<n; i++)
    {
        printf("+%d",a[i]);
    }
    printf("=%d",sum);
}
