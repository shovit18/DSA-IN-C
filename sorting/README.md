1.Bubble Sort:
compare adjcent elements and swap if they are in wrong order.After each full pass, the largest elements bubbles to the end.

why n-1-i?
after pass1, last 1 element is sorted, no need to check it.
After pass2, last 2 elements are sorted, no need to check them.
so after each pass the inner loop shrinks by 1, thats the -i.



2.Selection Sort:
In each pass, find the minimum elements from the unsorted part and put it at the begining.
(minIdx=i).



3.Insertion sort:
Like sorting playing cards in your hand. pick one card at a time and insert it in the correct position among already sorted cards.
(good when nearly sorted)

