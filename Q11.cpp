//INTERCHANGE VALUES
#include<stdio.h>
int main()
{
	int a,b,c;
	printf("Enter the value of first variable ");
	scanf("%d", &a);
	printf("Enter the value of second variable ");
	scanf("%d", &b);
	c=a;
	a=b;
	b=c;
	printf("\n\nValue of first variable is %d", a);
	printf("\nValue of second variable is %d", b);	
}