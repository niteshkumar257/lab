/*WAP to find the addition, subtraction, multiplication and division value of any two
real numbers. The above operation is carried out with the help of individual user
defined functions. User will be asked to enter a choice and based upon that choice the
result will be shown by calling only one function at a time.*/
#include<stdio.h>
int add(int x,int y){ return x+y;}
 int sub(int x,int y){return x-y;}
 int mul(int x, int y){return x*y;}
 float div(int x, int y){return x/y;}




int main()
{
	int n1,n2;
	printf("Enter the values of n1 and n2");
	scanf("%d%d",&n1,&n2);
	printf("1.add \n"
	        "2.sub\n"
	       " 3.mul\n"
	       " 4.div \n");
	int i;
	scanf("%d",&i);
	switch(i){
	case 1:
printf("%d\n",	add(n1,n2));
break;
case 2:
printf("%d\n",	sub(n1,n2));
break;
case 3:
	
printf("%d\n",	mul(n1,n2));
break;
case 4:
printf("%d\n",	div(n1,n2));
break;
}
	
	return 0;
}