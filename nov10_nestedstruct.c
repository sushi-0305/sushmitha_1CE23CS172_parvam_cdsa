#include<stdio.h>
struct Address{
    char street[20];
    char city[20];
    char state[20];
};
struct Person{
    char name[20];
    int age;
    struct Address address;
};
int main(){
    struct Person person;
    printf("enter name:");
    scanf("%s",&person.name);
    printf("enter age:");
    scanf("%d",&person.age);
    printf("enter street:");
    scanf("%s",&person.address.street);
    printf("enter city:");
    scanf("%s",&person.address.city);
    printf("%s\n%d\n%s\n%s",person.name,person.age,person.address.street,person.address.city);
    return 0;
}