#include <stdio.h>
int main()
{
    int arr[10];
    int i, max, min;
     printf("Enter elements in the array: ");
    for(i=0; i<10; i++)
    {
        scanf("%d", &arr[i]);
    }
    max = arr[0];
    min = arr[0];

   
    for(i=1; i<10; i++)
    {
       
        if(arr[i] > max)
        {
            max = arr[i];
        }
         if(arr[i] < min)
        {
            min = arr[i];
        }
    }

    
    printf("Maximum is = %d\n", max);
    printf("Minimum is = %d", min);

    return 0;
}