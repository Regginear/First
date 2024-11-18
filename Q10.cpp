//electricity bill
#include<stdio.h>
int main()

{
	int custo_ID, units;
	float rate, total;
	printf("Customer ID: ");
	scanf("%d", &custo_ID);
	printf("Units Consumed: ");
	scanf("%d", &units);
	printf("Rate per unit: ");
	scanf("%f", &rate);
	total=units*rate;
	printf("\n\nCustomer ID: %d", custo_ID);
	printf("\nUnits consumed: %d", units);
	printf("\nRate per unit: %f", rate);
	printf("\nTotal Bill: %f", total);
}
