#include<stdio.h>
int main(){
    int n,max=0,arr[6];
    printf("enter the no of elements:");
    scanf("%d",&n);
    printf("enter the elements:");
    for(int i=0;i<n;i++){
        scanf("%d",&arr[i]);
        if(arr[i]>max)
        max=arr[i];
    }
    printf("max element is:%d",max);
    return 0;
}

    

