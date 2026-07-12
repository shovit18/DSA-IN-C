#include <stdio.h>

int isPalindrome(int arr[], int n) {
    int l = 0, r = n - 1;

    while (l < r) {
        if (arr[l] != arr[r])
            return 0;   // not palindrome
        l++;
        r--;
    }
    return 1;   // palindrome
}

int main() {
    int arr[] = {1, 3, 5, 3, 1};
    int n = sizeof(arr) / sizeof(arr[0]);

    if (isPalindrome(arr, n))
        printf("Palindrome\n");
    else
        printf("Not palindrome\n");

    return 0;
}