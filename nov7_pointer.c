#include<stdio.h>
int main(){
    int b=10;
    int *ptr=&b;
    printf("the value of a:%d\n",b);
    printf("the address of a:%d\n",&b);
    printf("the pointer is:%d\n",ptr);
    printf("the size of pointer:%d\n",sizeof(ptr));

    return 0;
}