#include <stdio.h>

void swap(int *a, int *b) {
    int temp = *a;
    *a = *b;
    *b = temp;
}

void heapify(int arr[], int n, int i, int *swapCount) {
    int largest = i;
    int left = 2 * i + 1;
    int right = 2 * i + 2;

    if (left < n && arr[i] < arr[left]) {
        largest = left;
    }

    if (right < n && arr[largest] < arr[right]) {
        largest = right;
    }

    if (largest != i) {
        swap(&arr[i], &arr[largest]);
        (*swapCount)++;
        heapify(arr, n, largest, swapCount);
    }
}

void buildHeap(int arr[], int n, int *swapCount) {
    for (int i = n / 2 - 1; i >= 0; i--) {
        heapify(arr, n, i, swapCount);
    }
}

void heapSort(int arr[], int n, int *swapCount) {
    buildHeap(arr, n, swapCount);

    for (int i = n - 1; i > 0; i--) {
        swap(&arr[i], &arr[0]);
        (*swapCount)++;
        heapify(arr, i, 0, swapCount);
    }
}

int main() {
    int n;
    scanf("%d", &n);

    if (n == 0) {
        printf("-1\n");
    } else {
        int arr[n];
        for (int i = 0; i < n; i++) {
            scanf("%d", &arr[i]);
        }

        int swapCount = 0;
        heapSort(arr, n, &swapCount);
        printf("%d\n", swapCount);

        for (int i = 0; i < n; i++) {
            printf("%d ", arr[i]);
        }
    }

    return 0;
}
