#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number of elements:");
    scanf("%d",&num);
    int arr[num];
    for (int i=0; i<num; i++)
    {
        printf("Enter the %d number of array: ",i+1);
        scanf("%d",&arr[i]);
    }

    printf("Entered Number array is: ");
    for (int i=0; i<num; i++)
    {
        printf("%d ",arr[i]);
    }
    int size=sizeof(arr);
    int elements=sizeof(arr)/sizeof(arr[0]);
    printf("\nSize: %d\tElements=%d",size,elements);
}