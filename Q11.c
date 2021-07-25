/*WAP to read the x-coordinate and y-coordinate and two points in a plane and find the
distance between them using function.*/

#include<stdio.h>
#include<math.h>
float Distance(int x1,int y1,int x2,int y2)
{
return  sqrt((x1-x2)*(x1-x2)+(y1-y2)*(y1-y2));
}
int main()
{
	float a1,b1,a2,b2;
	printf(" Enter point 1 of the plane ");
	scanf("%f%f",&a1,&b1);
	printf("Enter point 2 of the plane ");
	scanf("%f%f",&a2,&b2);
	printf("%f",Distance(a1,b1,a2,b2));
	return 0;
}