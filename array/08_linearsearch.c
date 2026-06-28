#include <stdio.h>
int search(int arr[],int n,int target){
    for(int i=0;i<n;i++){
        if(arr[i] == target){
            return i;
        }
        }
        return -1;
}

int main(){
    int arr[]= {10,20,30,40,50};
    int n= sizeof(arr)/sizeof(arr[0]);

    int idx= search(arr,n,40);

    if(idx!=-1){
        printf("%dFOUND THE ELEMENT AT",idx);
    }
    else
    printf("NUMBER NOT FOUND");

}