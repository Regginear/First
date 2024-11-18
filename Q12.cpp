//even or odd
#include<stdio.h>
int main()
{
	int a;
	printf("Enter the number ");
	scanf("%d", &a);
	int r=a%2;
	if(r==0)
		printf("Number is even");
	else
		printf("Number is odd");
}