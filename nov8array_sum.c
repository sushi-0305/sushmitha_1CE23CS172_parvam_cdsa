#include<stdio.h>
int main(){
    int a[]={2,9,6,12,20};
    int sum=0;
    for(int i=0;i<5;i++){
        printf("%d\n",a[i]+5);
        sum+=a[i]+5;
    }
    printf("Sum of array elements: %d\n",sum);
    return 0;
}