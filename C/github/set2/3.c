#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int main()
{
    input_number();
}

int input_number()
{
    int n;
    printf("Enter number: ");
    scanf("%d",&n);
    is_composite(n);
}

int is_composite(int n)
{
    if (n==1 || n==0)
    {
        printf("Neither prime nor composite");
        return 0;
    }
    int r=1;
    for (int i=2; i<n; i++)
    {
        if (n%i==0)
        {
            r=0;
            break;
        }
    }
    output(n,r);
}

void output(int n, int result)
{
    if (result==0)
    {
        printf("%d is composite",n);
    }
    else if (result==1)
    {
        printf("%d is not composite",n);
    }
}