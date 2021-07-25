#include<stdio.h>
int main()
{
char s1[100];
char s2[100];
int i=0;
printf("Enter any string \n");
gets(s1);
for(i=0;s1[1]!=0;i++){
    s2[i]=s1[i];
}
s2[i]='\0';
printf("Enter string s1=%s\n",s1);
printf("String s2 is=%s\n",s2);
}