#include <stdio.h>

int rows()
{
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    return n;
}

void output(int rows)
{
    for (int i=1; i<=rows; i++)
    {
        for (int j=1; j<=rows; j++)
        {
            if (i>=2 && i<rows)
            {
                if (j>1 && j<rows)
                {
                    printf("  ");
                    continue;
                }
            }
            printf("* ");
        }
        printf("\n");
    }
}

int main()
{
    int row=rows();
    output(row);
}