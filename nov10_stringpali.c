#include <stdio.h>  
int main() {  
    char str[100];  
    int length=0,pali=1;
    printf("Enter a string: ");  
    scanf("%s",str);  
    while (str[length]!='\0') {  
        length++;  
    }  
    for (int i=0;i<length/2;i++) {  
        if (str[i]!=str[length-i-1]){  
            pali=0;  
            break; 
        }  
    }  
    printf("Reversed string: ");  
    for (int i=length-1;i>=0;i--) {  
        printf("%c",str[i]);
    }  
    printf("\n");  

    if (pali) {  
        printf("The string is a palindrome.\n");  
    } else {  
        printf("The string is not a palindrome.\n");  
    }  
    return 0;  
}