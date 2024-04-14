#include <stdio.h>
int main()
{
    int fuckoff,j;
    printf("Enter the number of rows:");
    scanf("%d",&fuckoff);
    int teresa=fuckoff-1;
    
    for (int i=1; i<=fuckoff; i++)
    {
        for (j=teresa; j>=1; j--)
        {
            printf(" ");
        }

        for(int k=1; k<=i; k++)
        {
            printf("* ");
        }

        printf("\n");
        teresa-=1;
    }
}