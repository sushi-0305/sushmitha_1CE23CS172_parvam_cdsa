#include <stdio.h>  
int main() {  
    char str1[100]="hello"; 
    char str2[100]="world";
    char temp;
    int i; 
    for(i=0;i<5;i++){
        temp=str1[i];
        str1[i]=str2[i];
        str2[i]=temp;
    }
    printf("After swapping:\n");  
    printf("%s ",str1);  
    printf("%s",str2); 
    return 0;  
}