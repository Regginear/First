//Compound interest
#include<stdio.h>
#include<math.h>
int main()
{
	float r, ci;
	float t, p, n;
	printf("Enter the principle, rate, no. of times compounded, time ");
	scanf("%f", &p);
	scanf("%f", &r);
	scanf("%f", &n);
	scanf("%f", &t);
	float a=(1+(r/100));
	float b=n*t;
	ci=p*pow(a,b);
	printf("Compund interest is %f", ci);
}
