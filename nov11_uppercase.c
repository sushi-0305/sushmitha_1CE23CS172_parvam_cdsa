#include<stdio.h>
int main(){
    char str[]="nyah";
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='a'&&str[i]<='z'){
            str[i]=str[i]-'a'+'A';
        }
        i++;
    }
    printf("uppercase string:\n%s",str);
    return 0;
}