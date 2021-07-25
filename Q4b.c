#include<stdio.h>
#include<string.h>
 
int main() {
   char str1[100];
   char str2[100];
 
   printf("Enter the String 1  ");
   gets(str1);
 
   strcpy(str2, str1);
   printf("Copy String is  %s", str2);
 
   return (0);
}