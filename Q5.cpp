//insurance premium
#include<stdio.h>
int main()
{
	int age;
	float rf, fp;
	int bp=35000;
	printf("AGE: ");
	scanf("%d", &age);
	printf("Risk Factor: ");
	scanf("%f", &rf);
	fp=(bp*(1+rf));
	printf("\n\nAGE: %d", age);
	printf("\nRisk Factor: %f", rf);
	printf("\nFinal Premium: %f", fp);
}