#include <stdio.h>
void insertAt(int arr[],int *n,int pos,int value){
    // shift elements right from end to pos
    for(int i=*n-1;i >=pos;i--)
    {
        arr[i+1]=arr[i];

    }
    arr[pos]=value;
    (*n)++;

}
int main()
{
    int arr[10]={10,20,30,40,50};
    int n=5;
  insertAt(arr,&n,2,99);   //arr= {10,20,99,30,40,50}
  for(int i=0;i<=n;i++){
    printf("%d\n",arr[i]);
  }
return 0;
}
