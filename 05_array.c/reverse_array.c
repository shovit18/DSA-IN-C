#include <stdio.h>
void reverse(int arr[],int n){
    int left = 0;
    int right= n-1;
    while(left<right){
        int temp;
        temp=arr[left];
        arr[left]=arr[right];
        arr[right]=arr[left];
        left++;
        right--;

    }

}
int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    reverse(arr,n);
    for(int i=0;i<n;i++){
        printf("%d",arr[i]);
        printf("\n");
    }
}