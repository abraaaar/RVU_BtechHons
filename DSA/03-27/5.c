#include<stdio.h>
 
int main()
{
    
    int i;
    // printf("Enter no. of elements of an array\n");
    // scanf("%d",&n);
    // int arr[n];
    // for(i=0;i<n;i++)
    // {
    //     scanf("%d",&arr[i]);
    // }
    // printf("Your elements are:\n");
    // for(i=0;i<n;i++)
    // {
    //     printf("%d\n",arr[i]);
    // }
    // int s1 = sizeof(arr);
    // printf("Size of integer array is %d\n",s1);

    // //character array(string)
    // char a[10];
    // printf("Enter character array\n");
    // scanf("%s",&a);
    // printf("Your character array is:\n");
    // printf("%s",a);
    // int s2 = sizeof(a);
    // printf("Size of integer array is %d\n",s2);

    //double

    double arr[5];
    for(i=0;i<5;i++)
    {
        scanf("%d",&arr[i]);
    }
    printf("Your elements are:\n");
    for(i=0;i<5;i++)
    {
        printf("%d\n",arr[i]);
    }
    printf("\nSize of double is %d\nNumber of elements = %d",sizeof(arr),sizeof(arr)/sizeof(arr[0]));
}