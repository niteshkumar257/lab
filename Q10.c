#include <stdio.h>
int main() {
  int  a[3][3], b[3][3], sum[3][3], i, j;
  
  printf("\nEnter elements of 1st matrix:\n");
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 3; ++j) {
     
      scanf("%d", &a[i][j]);
    }
     printf("Enter elements of 2nd matrix:\n");
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 3; ++j) {
      
      scanf("%d", &b[i][j]);
    }
 for (i = 0; i < 3; ++i)
    for (j = 0; j < 3; ++j) {
      sum[i][j] = a[i][j] + b[i][j];
    }printf("\nSum of two matrices: \n");
  for (i = 0; i < 3; ++i)
    for (j = 0; j < 3; ++j) {
      printf("%d   ", sum[i][j]);
      if (j == 2) {
        printf("\n\n");
 }
 }

      return 0;
}
