#include <stdio.h>
int main()
{
    int num;
    printf("Enter the number of items: ");
    scanf("%d",&num);
    printf("\n");
    int a[num], b[num];
    
    for (int i=0; i<num ; i++)
    {
        printf("Enter element %d of array: ",i+1);
        scanf("%d",&a[i]);
    }

    printf("Entered Array: ");
    for (int i=0; i<num ; i++)
    {
        printf("%d ",a[i]);
    }

    for(int j=0; j<num; j++)
    {
        int index=j;
        int value=a[j];
        for (int i=j; i<num ; i++)
        {
           if (a[i]<value)
            {
                value=a[i];
                index=i;
            } 
        }
        int temp=a[j];
        a[j]=value;
        a[index]=temp;
        b[j]=a[j];
    }

    printf("\nSorted Array: ");
    for (int i=0; i<num ; i++)
    {
        printf("%d ",b[i]);
    }
}