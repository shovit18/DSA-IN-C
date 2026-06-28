#include <stdio.h>
void deleteAt (int arr[],int*n,int pos){
    for(int i=pos;i<*n-1;i++){
        arr[i]=arr[i+1];
    }
    (*n)--; //decrease size
}
int main(){
    int arr[]={10,20,30,40,50};
    int n=5;
    deleteAt(arr, &n, 2);
    // arr = {10, 20, 40, 50}

    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);

    return 0;
}
