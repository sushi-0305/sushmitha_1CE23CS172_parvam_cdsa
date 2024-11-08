#include<stdio.h>
int main(){
    int n,arr[6],min;
    
    
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
    }
        min=arr[0];
    for(int i=0;i<n;i++){
    
        if(arr[i]<min)
        min=arr[i];
    }
    printf("min element is:%d",min);
    return 0;
}