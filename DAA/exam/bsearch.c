#include <stdio.h>
int main() 
{
    int size, key;
    scanf("%d", &size);

    if (size <= 0) 
    {
        printf("-1\n");
        return 0;
    }

    int arr[size];
    for (int i = 0; i < size; i++) 
    {
        scanf("%d", &arr[i]);
    }
    scanf("%d", &key);

    int comparisons = 0;
    int index = -1;
    int low = 0;
    int high = size - 1;

    while (low <= high) 
    {
        int mid = (low + high) / 2;
        comparisons++;

        if (arr[mid] == key) 
        {
            index = mid;
            break;
        } 
        else if (arr[mid] < key)
        {
            low = mid + 1;
        } 
        else 
        {
            high = mid - 1;
        }
    }

    if (index != -1)
    {
        printf("%d\n%d\n", comparisons, index);
    }
    else
    {
        printf("-1\n");
    }

    return 0;
}