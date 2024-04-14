#include <stdio.h>
#define ROWS 10

void alpha_a();
void alpha_b();
void alpha_c();
void alpha_e();
int main()
{
    char string[50];
    printf("Enter: ");
    scanf("%s", string);

    int i = 0;
    while (string[i] != '\0')
    {
        if (string[i] == 'a' || string[i] == 'A')
        {
            alpha_a();
            printf("\n");
        }
        else if (string[i] == 'b' || string[i] == 'B')
        {
            alpha_b();
            printf("\n");
        }
        else if (string[i] == 'c' || string[i] == 'C')
        {
            alpha_c();
            printf("\n");
        } 
        else if (string[i] == 'e' || string[i] == 'E')
        {
            alpha_e();
        }
        i++;
    }
}

void alpha_a()
{
    int i, j;
    for (i = 1; i <= ROWS; i++)
    {
        for (j = 1; j <= (ROWS - i); j++)
        {
            printf(" ");
        }
        for (j = 1; j <= (2 * i - 1); j++)
        {
            if (i == 1 || i == (ROWS / 2 + 1) || j == 1 || j == (2 * i - 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void alpha_b()
{
    for (int i = 1; i <= ROWS; i++)
    {
        for (int j = 1; j <= ROWS; j++)
        {
            if (j == 1 || j == ROWS || (i == ROWS / 2 + 1 && j <= ROWS / 2 + 1) || (i == 1 && j > ROWS / 2 + 1) || (i == ROWS && j > ROWS / 2 + 1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}

void alpha_c()
{
        for (int i = 1; i <= ROWS; i++) {
        for (int j = 1; j <= ROWS; j++) {
            if (i == 1 || i == ROWS || j == 1) {
                printf("*");
            } else {
                printf(" ");
            }
        }
        printf("\n");
    }
}


void alpha_e()
{
    for (int i = 1; i <= ROWS; i++)
    {
        for (int j = 1; j <= ROWS; j++)
        {
            if (i == 1 || i == ROWS || j == 1 || (i == ROWS / 2 + 1 && j < ROWS))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }
        printf("\n");
    }
}