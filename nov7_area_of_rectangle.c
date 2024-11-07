#include<stdio.h>
float area_rec(float l,float b){
    float area=l*b;
    printf("area:%.2f",area);
    return area;

}
int main(){
    float l,b;
    printf("enter length:");
    scanf("%f",&l);
    printf("enter breadth:");
    scanf("%f",&b);
    area_rec(l,b);
    return 0;
}
