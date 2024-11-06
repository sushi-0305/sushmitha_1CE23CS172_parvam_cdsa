#include<stdio.h>
int main(){
    int rev=0,n,rem;
     printf("Enter a number:");
    scanf("%d",&n);
    while (n!=0) {
        rev=rev*10+n%10;
        n/=10;
    }
    printf("reversed number:%d",rev);
    return 0;
}
