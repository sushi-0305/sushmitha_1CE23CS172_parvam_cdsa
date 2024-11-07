#include<stdio.h>
int add(int a, int b){
    int c=a+b;
    return c;
}
int main(){
    int a,b;
    printf("enter number for a:");
    scanf("%d",&a);
    printf("enter number for b:");
    scanf("%d",&b);
    int sum=add(a,b);
    printf("sum:%d",sum);
    return 0;
}