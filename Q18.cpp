//digit to char
#include<stdio.h>
int main()
{
	int digit;
	printf("Enter any digit ");
	scanf("%d", &digit);
	if(digit==1)
	{
		printf("ONE");
	}
	else if(digit==2)
	{
		printf("TWO");
	}else if(digit==3)
	{
		printf("THREE");
	}
	else if(digit==4)
	{
		printf("FOUR");
	}
	else if(digit==5)
	{
		printf("FIVE");
	}
	else if(digit==6)
	{
		printf("SIX");
	}
	else if(digit==7)
	{
		printf("SEVEN");
	}
	else if(digit==8)
	{
		printf("EIGHT");
	}
	else if(digit==9)
	{
		printf("NINE");
	}
	else
	{
		printf("ZERO");
	}
}