//Half pyramid of alphabets
#include <stdio.h>

int main()
{
    int r;
    char a='A';
    printf("Enter the number of rows: ");
    scanf("%d",&r);
    for (int i=1; i<=r; i++)
    {
        for (int j=1; j<=i; j++)
        {
            printf("%c ",a);
        }
        printf("\n");
        a++;
    }
}