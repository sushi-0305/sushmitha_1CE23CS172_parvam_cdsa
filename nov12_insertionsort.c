#include<stdio.h>
void insertsort(int arr[],int n){
    int i,key,j;
    for(i=1;i<n;i++){
        key=arr[i];
        j=i-1;
        while(j>=0&&arr[j]>key){
            arr[j+1]=arr[j];
            j=j-1;
        }
        arr[j+1]=key;
    }
}
void printarr(int arr[],int n){
    int i;
    for(i=0;i<n;i++){
        printf("%d ",arr[i]);
        printf("%d ",arr[i]);
    }
    printf("\n");
}
int main(){
    int arr[]={5,2,8,1,9,3,6,};
    int n=sizeof(arr)/sizeof(arr[0]);
    printf("original array:");
    printarr(arr,n);
    insertsort(arr,n);
    printf("sorted array:");
    printarr(arr,n);
    return 0;
}