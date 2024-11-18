//education
#include<stdio.h>
int main()
{
	int math,eng,sci;
	printf("Mathematics: ");
	scanf("%d", &math);
	printf("English: ");
	scanf("%d", &eng);
	printf("Science: ");
	scanf("%d", &sci);
	int total=math+eng+sci;
	printf("\n\nMathematics: %d", math);
	printf("\nScience: %d", sci);
	printf("\nEnglish: %d", eng);
	printf("\nTotal Score: %d", total);
	if(math>=40 && eng>=40 && sci>=40)
	{
		printf("\nResult: Pass");
	}
	else
	{
		printf("\nResult: Fail");
	}
}