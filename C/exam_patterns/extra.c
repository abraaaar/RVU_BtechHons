/*
       #  #
      ##  ##
     ###  ###
    ####  ####
*/
#include <stdio.h>
int rows()
{
    int n;
    printf("Enter number of rows: ");
    scanf("%d",&n);
    return n;
}
int main()
{
    int row=rows();
    for (int a = 1 ; a <= row ; a++)
    {
        for (int b = a ; b<=row ; b++)
        {
            printf(" ");
        }
        for (int c = 1 ; c <= a ; c++)
        {
            printf("*");
        }
        printf("  ");
        
        for (int d = 1; d<=a; d++)
        {
            printf("*");
        }  
        printf("\n");
    }
}