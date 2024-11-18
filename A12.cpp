//leap year
#include<stdio.h>
int main()
{
	int sy,ey;
	printf("Enter starting year: ");
	scanf("%d", &sy);
	printf("Enter ending year: ");
	scanf("%d", &ey);
	for(int year=sy;year<=ey;year++)
	{
		if(year%400==0 || year%4==0)
		{
			printf("\nLEAP YEARS BETWEEN %d and %d is %d", sy,ey,year);
		}
	}
}