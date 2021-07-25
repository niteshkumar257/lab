#include<stdio.h>

int main(){
    int arr1[10];
    int found,i;
    printf("All elements of an array arr1");
    for( i=0;i<10;i++)
    {
     scanf("%d \n",&arr1[i]);   
    }
    printf("Enter element for search");
    int key;
    scanf("%d",&key);
    for( i=0;i<10;i++){
       if(arr1[i]==key)
       {
           found=1;
           break;
       }

    }
    if(found == 1)
    {
        printf("\n%d is found at position %d", key, i + 1);
    }
    else
    {
        printf("\n%d is not found in the array", key);
    }
    
    return 0;
}