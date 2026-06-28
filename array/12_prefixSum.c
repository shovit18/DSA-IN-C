#include <stdio.h>
int main(){
    int arr[]= {1,2,3,4,5};
    int n= sizeof(arr)/sizeof(arr[0]);
    int prefix[n];
    prefix[0]=arr[0];
    for(int i=1;i<n;i++){
        prefix[i]=prefix[i-1]+arr[i];

    }
    for(int i=0;i<n;i++){
        printf("%d",prefix[i]);
        printf("\n");
    }



}
