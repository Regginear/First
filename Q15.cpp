//education system
#include<stdio.h>
int main()
{
	int math, sci, eng, tot;
	printf("Mathematics: ");
	scanf("%d", &math);
	printf("Science: ");
	scanf("%d", &sci);
	printf("English: ");
	scanf("%d", &eng);
	tot=math+sci+eng;
	printf("\n\nMathematics: %d", math);
	printf("\nScience: %d", sci);
	printf("\nEnglish: %d", eng);
	if(math>=40 && eng>=40 && sci>=40)
	{
		printf("\nResult: Pass");
	}
	else
	{
		printf("\nResult: Fail");
	}
}