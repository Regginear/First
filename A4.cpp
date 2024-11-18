//casting
#include<stdio.h>
int main()
{
	int items;
	float w;
	printf("Number of items: ");
	scanf("%d", &items);
	printf("Weight per item: ");
	scanf("%f", &w);
	float tot=(float)items*w;
	printf("\n\nTotal Weight: %.1f", tot);
}