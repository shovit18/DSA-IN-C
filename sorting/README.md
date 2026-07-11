## Bubble Sort:

compare adjcent elements and swap if they are in wrong order.After each full pass, the largest elements bubbles to the end.

### why n-1-i?

after pass1, last 1 element is sorted, no need to check it.
After pass2, last 2 elements are sorted, no need to check them.
so after each pass the inner loop shrinks by 1, thats the -i.


## Selection Sort:

In each pass, find the minimum elements from the unsorted part and put it at the begining.
(minIdx=i).


## Insertion sort:

Like sorting playing cards in your hand. pick one card at a time and insert it in the correct position among already sorted cards.
(good when nearly sorted)



## Array Palindrome

Checks whether an array reads the same forwards and backwards.

### Algorithm
1. Initialize two pointers:
   - Left (`l = 0`)
   - Right (`r = n - 1`)
2. Compare `arr[l]` and `arr[r]`.
3. If they are different, the array is not a palindrome.
4. Otherwise, move `l++` and `r--`.
5. Continue until `l >= r`.
6. If all pairs match, the array is a palindrome.

### Time Complexity
- O(n)

### Space Complexity
- O(1)