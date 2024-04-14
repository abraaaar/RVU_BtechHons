#include <stdio.h>

int swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
}


int main()
{
    int a, b;
    printf("Enter the number a: ");
    scanf("%d",&a);

    printf("Enter the number b: ");
    scanf("%d",&b);
    
    printf("\nBefore Swapping\nNumber a is %d and Number b is %d",a,b);

    swap(&a,&b);

    printf("\n\nAfter Swapping\nNumber a is %d and Number b is %d\n",a,b);
}