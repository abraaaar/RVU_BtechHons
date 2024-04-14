#include <stdio.h>
int main()
{
    int rows;
    printf("Enter rows: ");
    scanf("%d",&rows);
    
    int arr[rows][rows*2];
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<rows*2; j++)
        {
            arr[i][j]=0;
        }       
    }
    arr[0][rows-1]=1;

    for (int i=1; i<rows; i++)
    {
        for(int j=0; j<rows*2; j++)
        {
            if (j==0)
            {
                arr[i][j]=arr[i-1][j+1];
            }
            else if(j==(rows*2)-1)
            {
                continue;
            }
            else
            {
                arr[i][j]=arr[i-1][j-1]+arr[i-1][j+1];
            }
        }
    }
    for (int i=0; i<rows; i++)
    {
        for (int j=0; j<rows*2; j++)
        {
            if(arr[i][j]==0)
            {
                printf("   ");
            }
            else
            {
                printf("%d  ",arr[i][j]);
            }
        }
        printf("\n");
    }
}

