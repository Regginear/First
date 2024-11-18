//if else ladder
#include<stdio.h>
int main()
{
	int income;
	float tax;
	printf("Annual Income: ");
	scanf("%d", &income);
	if(income<=25000)
	{
		tax=0.1*income;
		printf("Tax: %f", tax);
	}
	else if(income>25001 && income<50000)
	{
		tax=0.2*income;
		printf("Tax: %f", tax);
	}
	else if(income>50001 && income<100000)
	{
		tax=0.3*income;
		printf("Tax: %f", tax);
	}
	else
	{
		tax=0.4*income;
		printf("Tax: %f", tax);
	}
}