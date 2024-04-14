#include <stdio.h>
int input_array_size();
void input_array(int n, int a[n]);
int sum_composite_numbers(int n, int a[n]);
void output(int sum);

int main()
{
    input_array_size();
}

int input_array_size()
{
    int s;
    printf("Enter size of array: ");
    scanf("%d",&s);
    int arr[s];
    input_array(s,arr);
}

void input_array(int n, int a[n])
{
    for(int i=0; i<n; i++)
    {
        printf("Enter %d number of array: ",i+1);
        scanf("%d",&a[i]);
    }
    sum_composite_numbers(n,a);
}

int sum_composite_numbers(int n, int a[n])
{
    int sum=0;
    for (int i=0; i<n;i++)
    {
        if (a[i]==0 || a[i]==1)
        {
            continue;
        }
        for (int j=2; j<a[i]; j++)
        {
            if (a[i]%j==0)
            {
                sum+=a[i];
                break;
            }
        }
    }
    output(sum);
}

void output(int sum)
{
    printf("The sum of composite numbers of the array is %d",sum);
}