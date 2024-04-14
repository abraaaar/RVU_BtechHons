#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int pnum=num-1;
    
    
    for(int i = 1 ; i <= num*2 ; i++)
    {
        if ( i % 2 == 0 )
        {
            printf("");
        }

        else
        {

        for (int k = pnum*2; k >= 1; k--)
        {
            printf(" ");     
        }
        
        for (int j = 1 ; j <= i ; j++)
        {
            printf("* ");
        }

        printf("\n");
        pnum--;

        }

    }
}