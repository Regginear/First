//product price calculation
#include<stdio.h>
int main()
{
	int uni_id;
	float op, dis, final;
	printf("Product ID: ");
	scanf("%d", &uni_id);
	printf("Original Price: ");
	scanf("%f", &op);
	printf("Discount Percentage: ");
	scanf("%f", &dis);
	final=(op-((dis/100)*op));
	printf("\n\nProduct ID: %d", uni_id);
	printf("\nOriginal Price: %f", op);
	printf("\nDiscount Percentage: %f", dis);
	printf("\nFinal Price: %f", final);
	
}