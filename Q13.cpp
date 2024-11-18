//positive nega
#include<stdio.h>
int main()
{
	int v;
	printf("Enter the number ");
	scanf("%d", &v);
	if(v>0)
	{
		printf("Number is positive");
	}
	else if(v<0)
	{
		printf("Number is negative");
	}
	else
	{
		printf("Number is zero");
	}
}