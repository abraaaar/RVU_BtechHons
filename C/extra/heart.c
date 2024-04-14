#include <stdio.h>
int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
    int space = rows*2 - 3 , mainbase = rows*2 - 1, secbase = ((mainbase+1) /2)-1;
   
    int s2=secbase;
    for (int a = 4 ; a <= secbase; a++)
    {
        for (int c=s2-4; c>=1 ;c--)
        {
            printf(" ");
        }

        for (int b=1; b<=a; b++)
        {
            printf(". ");
        }

        for (int d=1; d<=s2-2; d++)
        {
            printf(" ");
        }
        for (int c=s2-4; c>=1 ;c--)
        {
            printf(" ");
        }

        for (int b=1; b<=a; b++)
        {
            printf(". ");
        }



        printf("\n");
        s2--;
    }

    int num=rows;

    for (int a = 1 ; a <= (rows*2) -1 ; a++)
    {
        printf(". ");
    }
    printf("\n");

    for (int i = rows; i>=1; i--)
    {

        for (int j=num; j<rows; j++)
        {
            printf(" ");
            
        }

        for (int k=1; k <= (i*2)-1; k++)
        {
            printf(". ");
        }
        printf("\n");
        num-=2;
    }   
}