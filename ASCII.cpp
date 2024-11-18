//to calculate ASCII Value of entered char
#include<stdio.h>
int main()
{
	char a;
	printf("Enter the character for which you want to know the ASCII value ");
	scanf("%c", &a);
	int ascii_value=(int)a;
	printf("The ASCII value of %c is %d", a, ascii_value);	
}
