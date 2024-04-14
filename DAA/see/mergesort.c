#include <stdio.h>

int merge_count = 0;

void merge(int left[], int lsize, int right[], int rsize, int merged[]) {

    int i=0, j=0, k=0;

    while(i < lsize && j < rsize) 
    {

        if(left[i] <= right[j]) {
            merged[k] = left[i];
            i++;
        } else {
            merged[k] = right[j];
            j++; 
        }
        k++;
        merge_count++;
    }

    while(i < lsize) {
        merged[k] = left[i];
        i++;
        k++;
    }
    
    while(j < rsize) {
        merged[k] = right[j];
        j++;
        k++;
    }
}

void merge_sort(int array[], int size) {

    if(size <= 1) 
        return;

    int mid = size / 2;

    int left[mid];
    
    int lsize = mid;
    for(int i=0; i<mid; i++) {
        left[i] = array[i];
    }

    int right[size-mid];
    int rsize = size - mid;

    for(int i=mid; i<size; i++) {
        right[i-mid] = array[i]; 
    }

    merge_sort(left, lsize); 
    merge_sort(right, rsize);

    merge(left, lsize, right, rsize, array);  
}


int main() {

    int n;
    scanf("%d", &n);

    if(n==0) {
        printf("-1");
        return 0;
    }

    int arr[n];
    for(int i=0; i<n; i++) {
        scanf("%d", &arr[i]);
    }

    merge_sort(arr, n); 

    printf("%d\n", merge_count);
    
    for(int i=0; i<n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
