//marks
#include<stdio.h>
int main()
{
	int roll_no, math, phy, chem, tot_marks;
	float avg_marks;
	printf("Roll Number ");
	scanf("%d", &roll_no);
	printf("Mathematics ");
	scanf("%d", &math);
	printf("Physics ");
	scanf("%d", &phy);
	printf("Chemistry ");
	scanf("%d", &chem);
	tot_marks=math+phy+chem;
	avg_marks=(float)(math+phy+chem)/3;
	printf("\n\nPhysics: %d", phy);
	printf("\nChemistry: %d", chem);
	printf("\nMathematics: %d", math);
	printf("\nTotal marks: %d", tot_marks);
	printf("\nAverage marks: %f", avg_marks);
} 