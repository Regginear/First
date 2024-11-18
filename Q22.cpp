//bookstore
#include<stdio.h>
int main()
{
	float p1,p2,p3,tot,dis;
	printf("Price of book 1: ");
	scanf("%f", &p1);
	printf("Price of book 2: ");
	scanf("%f", &p2);
	printf("Price of book 3: ");
	scanf("%f", &p3);
	tot=p1+p2+p3;
	if(tot>=500)
	{
		dis=0.1*tot;
		printf("Discount: %f", dis);
		float tot1=tot-dis;
		printf("\nFinal Amount %f", tot1);
	}
	else
	{
		printf("Discount: 0.00");
		printf("\nFinal Price: %f", tot);
	}
}