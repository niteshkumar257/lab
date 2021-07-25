#include<stdio.h>

int main(){
    int n;
    int arr1[n];
    
    printf("Enter value of n");
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&arr1[i]);
    }
    for(int i=n-1;i>0;i--){
        printf("%d",arr1[i]);
    }
        
    
    return 0;
}