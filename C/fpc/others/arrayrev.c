#include <stdio.h>

int swap(int array[],int array2[],int len)
{
    
    for (int i=len-1, j=0; j<len; i--,j++)
    {
        array2[j]=array[i];
    }
    
}

int main()
{
    int len=5;
    int array[len],array2[len];
    for (int i=0; i<len; i++)
    {
        printf("Enter %d element of array: ",i);
        scanf("%d",&array[i]);
    }

    printf("\nIN CORRECT ORDER\n");

    for (int i=0; i<len; i++)
    {
        printf("%d ",array[i]);
    }

    swap(array,array2,len);

    printf("\nIN REVERSE ORDER\n");
    for (int i=0; i<len; i++)
    {
        printf("%d ",array2[i]);
    }
}