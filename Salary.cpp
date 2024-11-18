//to calculate salary of an employee
#include<stdio.h>
int main()
{
	float net_sal, basic_pay;
	printf("Enter your basic pay ");
	scanf("%f", &basic_pay);
	float hra=(0.15*basic_pay);
	float ta=(0.2*basic_pay);
	net_sal=(basic_pay+hra+ta);
	printf("Your net salary is %f", net_sal);
	return 0;
}
