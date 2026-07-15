#include <stdio.h>
void twoSum(int arr[], int n, int target) {
    int l = 0, r = n - 1;

    while (l < r) {
        int sum = arr[l] + arr[r];

        if (sum == target) {
            printf("Found at indices %d and %d\n", l, r);
            return;
        }
        else if (sum < target)
            l++;    // need bigger sum
        else
            r--;    // need smaller sum
    }
    printf("Not found\n");
}

int main(){
    int arr[]={1,4,5,8,9};
    int n=sizeof(arr)/sizeof(arr[0]);
    twoSum(arr,n,13);
}