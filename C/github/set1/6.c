#include <stdio.h>
int input();
int compare(int a, int b, int c, int *largest);
void output(int a, int b, int c, int largest);

int main()
{
    input();
}

int input()
{
    int a, b, c, largest;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    printf("Enter third number: ");
    scanf("%d",&c);
    compare(a,b,c, &largest);
    output(a,b,c,largest);
}

int compare (int a, int b, int c, int *largest)
{
    
    if (a>b && a>c)
    {
        *largest=a;
    }

    else if (b>a && b>c)
    {
        *largest=b;
    }   

    else if (c>b && c>b)
    {
        *largest=c;
    }

    else if ((c==a && c>b) || (a==b && a==c))
    {
        *largest=c;

    }

    else if ((b==c && b>a) || (b==a && b>c))
    {
        *largest=b;
    } 
}

void output(int a, int b, int c, int largest)
{
    printf("The largest of %d,%d and %d is %d.",a,b,c,largest);
}