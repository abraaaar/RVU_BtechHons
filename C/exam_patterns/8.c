//Square star pattern

#include <stdio.h>

int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    for (int i=1; i<=r; i++)
    {
        for (int j=r; j>=1; j--)
        {
            printf("* ");
        }
        printf("\n");
        
    }
}