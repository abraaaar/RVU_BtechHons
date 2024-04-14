#include <stdio.h>
int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    
    int wow=((((2*r)-1)/2)+1);
    for (int i=1; i<=r; i++)
    {
        for (int l=2; l<=i; l++)
        {
            printf("  ");
        }

        for (int k=1; k<wow; k++)
        {
            printf("%d ",k);
        }
        for (int j=wow; j>=1; j--)
        {
            printf("%d ",j);
        }
        printf("\n");
        wow--;

    }
}