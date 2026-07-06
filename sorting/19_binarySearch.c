#include <stdio.h>

int binarySearch(int arr[], int n, int target) {
    int l = 0, r = n - 1;

    while (l <= r) {
        int m = l + (r - l) / 2;   // safe mid formula

        if (arr[m] == target)
            return m;          // found! return index

        else if (arr[m] < target)
            l = m + 1;         // target is in right half

        else
            r = m - 1;         // target is in left half
    }

    return -1;   // not found
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11, 13};
    int n = sizeof(arr) / sizeof(arr[0]);

    int idx = binarySearch(arr, n, 11);

    if (idx != -1)
        printf("Found at index %d\n", idx);   // Found at index 5
    else
        printf("Not found\n");

    return 0;
}