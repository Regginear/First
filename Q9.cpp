//interest
#include<stdio.h>
int main()
{
	int p,t;
	float r,i;
	printf("Principal: ");
	scanf("%d", &p);
	printf("Rate: ");
	scanf("%f", &r);
	printf("Time : ");
	scanf("%d", &t);
	i=(p*r*t);
	printf("\n\nPrincipal: %d", p);
	printf("\nRate: %f", r);
	printf("\nTime: %d", t);
	printf("\nInterest: %f", i);
}