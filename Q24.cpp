//gadget
#include<stdio.h>
int main()
{
	int days;
	float g1,g2,g3;
	printf("Days: ");
	scanf("%d", &days);
	printf("Rate of Gadget 1: ");
	scanf("%f", &g1);
	printf("Rate of Gadget 2: ");
	scanf("%f", &g2);
	printf("Rate of Gadget 3: ");
	scanf("%f", &g3);
	float tot=g1+g2+g3;
	printf("\n\nCost for Gadget 1: %f", g1);
	printf("\nCost for Gadget 2: %f", g2);
	printf("\nCost for Gadget 3: %f", g3);
	printf("\nTotal Rental Cost: %f", tot);
}