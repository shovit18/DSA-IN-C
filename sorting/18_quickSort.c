#include <stdio.h>

int partition(int arr[], int l, int r) {
    int pivot = arr[r];
    int i = l - 1;

    for (int j = l; j < r; j++) {
        if (arr[j] < pivot) {
            i++;
            int temp = arr[i]; arr[i] = arr[j]; arr[j] = temp;
        }
    }

    int temp = arr[i+1]; arr[i+1] = arr[r]; arr[r] = temp;
    return i + 1;
}

void quickSort(int arr[], int l, int r) {
    if (l >= r) return;
    int pi = partition(arr, l, r);
    quickSort(arr, l, pi - 1);
    quickSort(arr, pi + 1, r);
}

int main() {
    int arr[] = {5, 3, 8, 1, 4};
    int n = sizeof(arr) / sizeof(arr[0]);

    quickSort(arr, 0, n - 1);

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    // Output: 1 3 4 5 8

    return 0;
}