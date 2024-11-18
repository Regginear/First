//leap year
#include<stdio.h>
int main()
{
	int year;
	printf("Enter the year ");
	scanf("%d", &year);
	if(year%400==0 && year%4==0)
	{
		printf("Year is a LEAP YEAR");
	}
	else
	{
		printf("not a LEAP YEAR");
	}
}