//Floyd's Triangle
#include <stdio.h>

int main()
{
    int r;
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    int wow=1;
    for (int i=1; i<=r; i++)
    {
        for (int j=1; j<=i; j++, wow++)
        {
            if (i<5)
            {
                printf("%d  ",wow);
            }
            else if(i>=5)
            {
                printf("%d ",wow);
            }
        }
        printf("\n");
    }
}