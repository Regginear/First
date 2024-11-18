//Employee performance review
#include<stdio.h>
int main()
{
	int Emp_id, produ, effi, relia;
	printf("Employee ID: ");
	scanf("%d", &Emp_id);
	printf("Performance: ");
	scanf("%d", &produ);
	printf("Efficiency: ");
	scanf("%d", &effi);
	printf("Reliability: ");
	scanf("%d", &relia);
	float Score=(float)(produ+effi+relia)/3;
	printf("\n\nEmployee ID: %d", Emp_id);
	printf("\nProductivity: %d", produ);
	printf("\nEfficiency: %d", effi);
	printf("\nReliability: %d", relia);
	printf("\nPerformance Score: %f", Score);
}