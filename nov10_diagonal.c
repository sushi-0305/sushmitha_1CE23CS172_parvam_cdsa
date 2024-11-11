#include<stdio.h>
int main(){
    int arr[3][3],n=3;
    printf("enter the elements:");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the diagonal elements are: ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            if(i==j)
            printf("%d ",arr[i][j]);
        }
    }
    return 0;
}