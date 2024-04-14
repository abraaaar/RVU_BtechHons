#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

int main() {
    int sz;
    scanf("%d", &sz);

    if (sz <= 0) {
        printf("-1\n");
        return 0;
    }

    int arr[sz];
    for (int i = 0; i < sz; i++) {
        scanf("%d", &arr[i]);
    }

    int pv;
    scanf("%d", &pv);

    int x = arr[pv];
    int i = -1;
    int swap = 0;

    for (int j = 0; j < sz - 1; j++) 
    {
        if (arr[j] <= x)
        {
            i++;
            // Swap arr[i] and arr[j]
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            if (i != j) 
            {
                swap++;
            }
        }
    }

    // Swap arr[i+1] and arr[pv]
    int temp = arr[i + 1];
    arr[i + 1] = arr[pv];
    arr[pv] = temp;
    swap++;

    printf("%d\n", swap);
    for (int k = 0; k < sz; k++) {
        printf("%d ", arr[k]);
    }
    printf("\n%d\n", i + 1);

    return 0;
}