#include<stdio.h>
int main(){
    int a[5]={2,3,5,6,7};
    int n=sizeof(a)/sizeof(a[0]);
    int target;
    printf("Enter the target number: ");
    scanf("%d",&target);
    for(int i=0;i<n;i++){
        if(target==a[i]){
            printf("Target found at index %d\n",i);
            return 0;
        }

    }

    printf("the element is not present");

}
