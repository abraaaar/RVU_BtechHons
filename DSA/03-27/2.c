#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number of elements:");
    scanf("%d",&num);
    char arr[num];
    for (int i=0; i<num; i++)
    {
        printf("Enter the %d character of array: ",i+1);
        scanf("%s",&arr[i]);
    }

    printf("Entered Character array is: ");
    for (int i=0; i<num; i++)
    {
        printf("%c ",arr[i]);
    }

    int size=sizeof(arr);
    int elements=sizeof(arr)/sizeof(arr[0]);
    printf("\nSize: %d\t Elements=%d",size,elements);
}