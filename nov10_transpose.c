#include<stdio.h>
int main(){
    int arr[3][3],n=3;
    printf("enter the elements:");
    int trans[3][3];
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            scanf("%d",&arr[i][j]);
        }
    }
    printf("the transpose of the matrix is:\n ");
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++){
            trans[i][j]=arr[j][i];
            printf("%d ",trans[i][j]);
        }
        printf("\n");

            
    }
    return 0;
}
