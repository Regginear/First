//area of triangle
#include<stdio.h>
int main()
{
	float base, height;
	printf("Enter the base and height of the triangle ");
	scanf("%f", &base);
	scanf("%f", &height);
	float area=((base*height)/2);
	printf("Area of triangle is %f", area);
}