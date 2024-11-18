//type conversion
#include<stdio.h>
int main()
{
	int p;
	float t;
	printf("Power(kW): ");
	scanf("%d", &p);
	printf("Time(hr): ");
	scanf("%f", &t);
	float en=(float)p*t;
	printf("\n\nTotal Energy= %f kWh", en);
}