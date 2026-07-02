#include <stdio.h>

// merges two sorted halves: arr[l..m] and arr[m+1..r]
void merge(int arr[], int l, int m, int r) {
    int n1 = m - l + 1;   // size of left half
    int n2 = r - m;       // size of right half

    // temporary arrays
    int left[n1], right[n2];

    // copy data into temp arrays
    for (int i = 0; i < n1; i++)
        left[i] = arr[l + i];
    for (int j = 0; j < n2; j++)
        right[j] = arr[m + 1 + j];

    int i = 0;      // pointer for left
    int j = 0;      // pointer for right
    int k = l;      // pointer for main array

    // pick smaller element from left or right
    while (i < n1 && j < n2) {
        if (left[i] <= right[j]) {
            arr[k] = left[i];
            i++;
        } else {
            arr[k] = right[j];
            j++;
        }
        k++;
    }

    // copy remaining elements of left (if any)
    while (i < n1) {
        arr[k] = left[i];
        i++;
        k++;
    }

    // copy remaining elements of right (if any)
    while (j < n2) {
        arr[k] = right[j];
        j++;
        k++;
    }
}

void mergeSort(int arr[], int l, int r) {
    if (l >= r) return;   // base case: single element, already sorted

    int m = l + (r - l) / 2;   // find middle

    mergeSort(arr, l, m);       // sort left half
    mergeSort(arr, m + 1, r);   // sort right half
    merge(arr, l, m, r);        // merge both halves
}

int main() {
    int arr[] = {5, 3, 8, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    mergeSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    // Output: 1 3 5 8
}

    
