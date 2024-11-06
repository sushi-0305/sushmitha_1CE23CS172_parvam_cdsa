#include<stdio.h>
int main(){
    int n,sum=0;
    printf("Enter a number: ");
    scanf("%d",&n);
    while(n!=0){
        sum=sum+(n%10);
        n/=10;
    }
    printf("sum of the number is: %d\n",sum);
    return 0;
}

