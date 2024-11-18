//program for increase in population
#include<stdio.h>
int main()
{
	printf("The original population was 30,000 \n");
	printf("The population after 1 year is \n");
	float pop1=((0.2*30000)+30000);
	printf("%f", pop1);
	printf("\nThe population after 2 years is \n");
	float pop2=((0.3*pop1)+pop1);
	printf("%f", pop2);
}