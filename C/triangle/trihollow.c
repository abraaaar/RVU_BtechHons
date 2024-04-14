#include <stdio.h>

int main()
{
    int num;
    printf("Enter the number of rows: ");
    scanf("%d",&num);
    int pnum=num-1;
    for (int i=1; i<=num; i++)
    {

        for(int k=pnum; k>=1; k--)
        {
            printf(" ");
        }

        for (int j=1; j<=i; j++)
        {
            printf("* ");

            if(i>2 && i<num)
            {     

                for (int q=3; q<=i; q++)
                {
                     printf("  ");
                }

                printf("*");
                break;

            }
        }

        printf("\n");
        pnum-=1;
    }
}