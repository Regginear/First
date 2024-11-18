//
#include<math.h>
#include<stdio.h>
int main()
{
	int num1, num2;
	printf("Enter two values: ");
	scanf("%d%d", &num1,&num2);
	printf("\nAddition is: %d", num1+num2);
	printf("\nSubstraction is: %d", num1-num2);
	printf("\nMultiplication is: %d", num1*num2);
	printf("\nDivision is: %d", num1/num2);
	printf("\nRemainder is: %d", num1%num2);
}