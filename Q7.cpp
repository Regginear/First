//gpa
#include<stdio.h>
int main()
{
	int std_id;
	float phy, chem, maths;
	printf("Student ID: ");
	scanf("%d", &std_id);
	printf("Physics: ");
	scanf("%f", &phy);
	printf("Chemistry: ");
	scanf("%f", &chem);
	printf("Mathematics: ");
	scanf("%f", &maths);
	float gpa=(phy+chem+maths)/3;
	printf("\n\nStudent ID: %d", std_id);
	printf("\nPhysics Grade: %f", phy);
	printf("\nChemistry Grades: %f", chem);
	printf("\nMathematics Grades: %f", maths);
	printf("\nGPA: %f", gpa);
}
