#include <stdio.h>
int main()
{
char s[100];
int i;

printf("Enter a string");
scanf("%s", s);

for(i = 0; s[i] != '\0 '; ++i); 

printf("length of the string %d", i);
return 0;
}
