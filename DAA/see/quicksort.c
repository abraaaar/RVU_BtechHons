#include <stdio.h>

int comparisons = 0;
int swaps = 0;

int partition(int arr[], int low, int high) {

    int pivot = arr[high];
    int i = low - 1;

    for(int j = low; j < high; j++) {
        comparisons++;
        if(arr[j] <= pivot) {
            i++; 
            int temp = arr[i];
            arr[i] = arr[j];
            arr[j] = temp;
            if(i != j)
                swaps++;
        }
    }

    int temp = arr[i+1];
    arr[i+1] = arr[high];
    arr[high] = temp;

    if(i+1 != high) 
        swaps++;
    
    return i+1;
}

void quickSort(int arr[], int low, int high) {

    if(low < high) {
        
        int pi = partition(arr, low, high);

        quickSort(arr, low, pi-1); 

        quickSort(arr, pi+1, high);
    }
}

int main() {

    int n;
    scanf("%d", &n);

    if(n == 0) {
        printf("-1");
        return 0; 
    }

    int arr[n];
    for(int i = 0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    quickSort(arr, 0, n-1);

    printf("%d\n", comparisons);
    printf("%d\n", swaps);

    for(int i = 0; i<n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}

