#include<stdio.h>
int main(){
    int arr[]={3,7,6,4,1};
    int *ptr=arr;
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        printf("%d\n",*(ptr+i));
        ptr++;
    }
    return 0;
}