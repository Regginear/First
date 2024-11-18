//input the price of a product and display total cost
#include<stdio.h>
int main()
{
	float gst, cp;
	printf("Enter the cost of the item ");
	scanf("%f", &cp);
	printf("Enter GST ");
	scanf("%f", &gst);
	float net_gst=(gst/100);
	float net_cp=((net_gst*cp)+cp);
	printf("The total cost of your item is %f", net_cp);
	printf("\nHave A Nice Day.......\nVisit Again.......");
}