#include<stdio.h>

int main(){
    int A[3][3],sum=0;
    printf("Enter the elements of matrix");
    for(int i=0;i<3;i++)
{
    for(int j=0;j<3;j++){
        scanf("%d",&A[i][j]);
    }
}
for(int i=0;i<3;i++){
    for(int j=0;j<3;j++){
        if(i==j){
            sum=sum+A[i][j];
        }
    }
}
printf("sum of tha diagonal elemnets= %d",sum);
    return 0;
}