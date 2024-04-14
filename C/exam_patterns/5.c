//Inverted half pyramid of numbers
#include <stdio.h>

int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    for (int i=1; i<=r; i++)
    {
        for (int k=2; k<=i; k++)
        {
            printf("  ");
        }
        for (int j=r; j>=i; j--)
        {
            printf("%d ",i);
        }
        printf("\n");
        
    }
}