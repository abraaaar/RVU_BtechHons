#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number:");
    scanf("%d",&num);
    int num1=num;

    for (int i = num ; i >= 1 ; i--)
    {

        for (int k=num1; k<num; k++)
        {
            printf(" ");
        }

        for (int j = 1; j <= i ; j++)
        {
            printf("* ");
        }

        num1--;
        
        printf("\n");
    }
    
}