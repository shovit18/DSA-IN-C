#include <stdio.h>
int hasDuplicate(int arr[],int n){
    for(int i=0;i<n-1;i++){
        for(int j=i+1;j<n;j++){
            if(arr[i]==arr[j]){
               return 1;
            }
            
        }

    }
    return 0;
}
int main(){
    int arr[]={10,20,30,40,50,50};
    int n= sizeof(arr)/sizeof(arr[0]);
    printf("%d",hasDuplicate(arr,n));

}