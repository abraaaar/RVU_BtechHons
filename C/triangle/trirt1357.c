#include <stdio.h>

int main()
{
    int rows;
    printf("Enter the number of rows: ");
    scanf("%d",&rows);
  /*  
    for (int i = 1; i <= rows*2; i++)
    {
        if (i%2==0)
        {
            printf("");
        }

        else
        { 
    
        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }
           printf("\n");
        }
    }


*/
    for (int i = 1 ; i <= rows ; i++)
    {
        for (int j = 1 ; j <= 2*i - 1 ; j++)
        {
            printf("* ");
        }

        printf("\n");

    }
}