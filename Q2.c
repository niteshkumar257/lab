#include<stdio.h>

int main(){
    int arr1[10];
    int arr2[10];
    printf("Enter all The numbers of arr1 \n");
    for(int i=0;i<10;i++){
     scanf("%d \n",&arr1[i]);
    }
    for(int i=0;i<10;i++){
        arr2[i]=arr1[i];
    }
    printf("Print all the elements of arr2 \n");
    for(int i=0;i<10;i++){
        printf("%d \n",arr2[i]);
    }
    return 0;
}