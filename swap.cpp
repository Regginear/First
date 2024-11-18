//swap numbers without using third variable
#include<stdio.h>
int main()
{
	int a, b;
	printf("Enter the number in variable a ");
	scanf("%d", &a);
	printf("Enter the number in variable b ");
	scanf("%d", &b);
	a=a+b; 
	b=a-b; 
	a=a-b;
	printf("Number in variable a is %d", a);
	printf("\nNumber in variable b is %d", b);
}
