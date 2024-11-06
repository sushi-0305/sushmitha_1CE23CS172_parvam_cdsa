#include<stdio.h>
int main(){
    int n,rev=0,rem,og;
    printf("enter a number:");
    scanf("%d",&n);
    og=n;
    while(n!=0){
        rev=rev*10+n%10;
        n/=10;
    }
    if(rev==og){
        printf("it is a palindrome\n");
    
    }
    else{
        printf("it is not a palindrome\n");
    }
}