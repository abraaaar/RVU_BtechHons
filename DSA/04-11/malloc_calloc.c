#include <stdio.h>
#include <stdlib.h>
#define ARRSIZE 5

int main()
{
    int num;
    while (1)
    {
        printf("1 for Malloc or 2 for Calloc: ");
        scanf("%d", &num);
        if (num == 1)
        {
            int *malloc_ptr;
            malloc_ptr = (int*)malloc(ARRSIZE * sizeof(int));
            if (malloc_ptr == NULL)
            {
                printf("Malloc Memory  allocation failed aaaaaaaaaaa");
                return 0;
            }
            for (int i = 0; i < ARRSIZE; i++)
            {
                printf("Enter element %d: ", i + 1);
                scanf("%d", &malloc_ptr[i]);
            }

            for (int i = 0; i < ARRSIZE; i++)
            {
                printf("Malloc Element %d = %d\n", i + 1, malloc_ptr[i]);
            }
            free(malloc_ptr);
            return 0;
        }

        else if (num == 2)
        {
            char *calloc_ptr;
            calloc_ptr = (char*)calloc(ARRSIZE, sizeof(char));
            if (calloc_ptr == NULL)
            {
                printf("Calloc Memory allocation failed wowowowoow");
                return 0;
            }
            for (int i = 0; i < ARRSIZE; i++)
            {
                printf("Enter char %d: ", i + 1);
                scanf(" %c", &calloc_ptr[i]);
            }

            for (int i = 0; i < ARRSIZE; i++)
            {
                printf("Calloc Char %d = %c\n", i + 1, calloc_ptr[i]);
            }
            free(calloc_ptr);
            return 0;
        }

        else 
        {
            printf("Invalid Input bitch, try again");
        }
    }
}