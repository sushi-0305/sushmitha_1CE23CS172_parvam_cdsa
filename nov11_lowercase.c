#include<stdio.h>
int main(){
    char str[]="NYAH";
    int i=0;
    while(str[i]!='\0'){
        if(str[i]>='A'&&str[i]<='Z'){
            str[i]=str[i]+'a'-'A';
        }
        i++;
    }
    printf("lowercase string:\n%s",str);
    return 0;
}