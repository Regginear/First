//type conversion
#include<stdio.h>
int main()
{
	float y1,y2;
	printf("Yield 1: ");
	scanf("%f", &y1);
	printf("Yield 2: ");
	scanf("%f", &y2);
	int y=(int)y1;
	int y0=(int)y2;
	printf("\n\nConverted yield 1= %d", y);
	printf("\nConverted yield 2= %d", y0);
}
