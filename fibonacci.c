#include<stdio.h>
int main(){
    int n,n1=0,n2=1,n3=0;
    printf("enter no of digits:");
    scanf("%d",&n);
    printf("fibonacci sequence upto %d terms:\n",n);
    for(int i=0;i<n;i++){
        if(i==0){
            printf("%d\t",n1);
        }
        else if(i==1){
            printf("%d\t",n2);
        }else{
            n3=n1+n2;
            n1=n2;
            n2=n3;
            printf("%d\t", n3);
        }
    }
    return 0;
}












//0 1 1 2 3 4 5  num1=0 num2=1