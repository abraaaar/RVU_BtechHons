#include <stdio.h>
#include <stdlib.h>

int *wow;
int input();
void input_values(int array[][*wow], int length);

int main()
{
   int items[3][*wow];
   input_values(items, *wow);
   for (int i = 0 ; i< 3; i++)
   {
    for (int j=0; j<*wow; j++ )
    {
        printf("%d", items[i][j]);
    }
   }
}

int input()
{
    printf("Enter the number of items: ");
    scanf("%d",&wow);
}

void input_values(int array[][*wow], int length)
{
    for (int j = 0 ; j < length; j++)
    {
        for (int i = 0 ; i < 3 ; i++)
        {
            if ( i == 0 )
            {
                array[i][j]=j+1;
            }
            else if( i == 1)
            {
                printf("Enter the Value of Item %d: ",j+1);
                scanf("%d",&array[i][j]);
            }
            else if ( i == 2)
            {
                printf("Enter the Weight of Item %d",j+1);
                scanf("%d",&array[i][j]);
            }
        }
    }
}