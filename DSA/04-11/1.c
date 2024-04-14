#include <stdio.h>
#include <stdlib.h>

#define SIZEOFARRAY 5

int main()
{
    int *arr1, *arr2;
    printf("USING MALLOC");
    arr1 = (int *)malloc(SIZEOFARRAY * sizeof(int));
    if (arr1 == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nEnter %d integers: ", SIZEOFARRAY);
    for (int i = 0; i < SIZEOFARRAY; i++)
    {
        scanf("%d", &arr1[i]);
    }

    printf("The integers entered are: ");
    for (int i = 0; i < SIZEOFARRAY; i++)
    {
        printf("%d ", arr1[i]);
    }




    printf("\n\n\nUSING CALLOC");    
    int n;
    printf("\nEnter the number of integers to allocate memory for: ");
    scanf("%d", &n);

    arr2 = (int *)calloc(n, sizeof(int));
    if (arr2 == NULL)
    {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("\nEnter %d integers: ", n);
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &arr2[i]);
    }

    printf("The integers entered are: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", arr2[i]);
    }

    printf("\n");
    free(arr1);
    free(arr2);

    return 0;
}
