//to read a char, integer and float values
#include<stdio.h>
int main()
{
	char a;int c;float b;
	printf("Enter a character, float and integer value ");
	scanf("%c", &a);
	scanf("%f", &b);
	scanf("%d", &c);
	printf("The character entered is %c\n", a);
	printf("The float value entered is %f\n", b);
	printf("The integer value entered is %d", c);
}