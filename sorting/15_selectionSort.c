#include <stdio.h>
void selectionSort(int arr[],int n){
    for(int i=0;i<n-1;i++){
        int minIdx=i;  // suppose first element is minimum
        // find actual minimum from the unsorted elements
        for (int j=i+1;j<n;j++){
            if(arr[j]<arr[minIdx]){
                minIdx=j;
            }
        }
        //swap minimum with first unsorted element
        int temp=arr[minIdx];
        arr[minIdx]=arr[i];
        arr[i]= temp;

    }
}
int main(){
    int arr[]={2,1,8,9,6};
    int n= sizeof(arr)/sizeof(arr[0]);
    selectionSort(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
}