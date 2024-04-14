#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main()
{
    int r1, c1, r2, c2;
    scanf("%d %d", &r1, &c1);
    int matrix1[r1][c1];
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c1; j++)
            scanf("%d", &matrix1[i][j]);
    }
    scanf("%d %d", &r2, &c2);
    int matrix2[r2][c2];
    for (int i = 0; i < r2; i++)
    {
        for (int j = 0; j < c2; j++)
            scanf("%d", &matrix2[i][j]);
    }
    if (c1 != r2 || r1 <= 0 || c1 <= 0 || r2 <= 0 || c2 <= 0)
    {
        printf("-1");
        return 0;
    }

    int matrix3[r1][c2];
    int mul = 0, add = 0;
    memset(matrix3, 0, sizeof(matrix3));

    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            for (int k = 0; k < c1; k++)
            {
                matrix3[i][j] += matrix1[i][k] * matrix2[k][j];
                mul++;
                if (k < c1 - 1)
                    add++;
            }
        }
    }
    for (int i = 0; i < r1; i++)
    {
        for (int j = 0; j < c2; j++)
        {
            printf("%d", matrix3[i][j]);
            if (j < c2 - 1)
                printf(" ");
        }
        printf("\n");
    }
    printf("%d %d", mul, add);
    return 0;
}