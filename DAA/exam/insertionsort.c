#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() 
{
    int size, comparisons = 0, movements = 0;
    scanf("%d",&size);
    if (size == 0)
    {
        printf("-1");
        return 0;
    }
    else if (size == 1)
    {
        int num;
        scanf("%d", &num);
        printf("0\n0\n%d",num);
        return 0;
    }
    int array[size];
    for (int i = 0; i<size; ++i)
    {
        scanf("%d",&array[i]);
    }
    
    
    //INSERTION SORT
    int temp, j;
    for (int i = 1; i < size; i++)
    {
        temp = array[i];
        j = i-1;
        while (j>=0)
        {
            comparisons++;
            if (array[j] > temp)
            {
                movements++;
                array[j+1] = array[j];
                j--;
            }
            else
            {
                break;
            }
        }
        array[j+1] = temp;
    }
    //INSERTION SORT
    // int temp, j;
    //  for(int i = 1; i < size; i++)
    //  {
    //     temp = array[i];
    //     j = i-1;
    //     while(j>=0)
    //     {
    //         comparisons++;
    //         if(array[j]>temp)
    //         {
    //             array[j+1] = array[j];
    //             j--;
    //             movements++;
    //         }
    //         else 
    //             break;
    //     }
    //     array[j+1] = temp;
    // }
    printf("%d\n%d\n",comparisons, movements);
    for (int i = 0; i<size; ++i)
    {
        printf("%d ",array[i]);
    }
}
