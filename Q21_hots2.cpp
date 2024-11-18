//sum od digits
#include<stdio.h>
int main()
{
	long int num;
	int sum,rem;
	printf("Enter the number ");
	scanf("%ld", &num);
	do
	{
		sum=0;
		while(num>0)
	{
		rem=num%10;//storing the last digit of number
		sum=sum+rem;//adding the last digits
		num=num/10;//removing the last digit
	}
	num=sum;
	}while(num>9);
	printf("SUM OF DIGITS= %d", sum);
}