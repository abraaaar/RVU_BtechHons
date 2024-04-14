#include <stdio.h>
int main()
{
    int rows;
    printf("Enter: ");
    scanf("%d",&rows);
    int num=rows;

    

    for (int i = rows; i>=1; i--)
    {

        for (int j=num; j<rows; j++)
        {
            printf(" ");
        }

        for (int k=1; k <= (i*2)-1; k++)
        {
            printf("* ");
        }
        printf("\n");
        num-=2;



    }
}