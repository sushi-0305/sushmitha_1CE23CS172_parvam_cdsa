#include<stdio.h>
int add(){
    int a,b;
    printf("enter number for a:");
    scanf("%d",&a);
    printf("enter number for b:");
    scanf("%d",&b);
    int c=a+b;
    printf("sum:%d",c);
    
}
int main(){
    add();
    return 0;
}