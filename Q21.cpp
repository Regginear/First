//sum and average
#include<stdio.h>
int main()
{
	float sum,average;
	int num,count=1;
	printf("Enter the number ");
	scanf("%d", &num);
	if(num>1)
	{
		while(num>0)
	{
		sum=sum+num;
		count++;
		printf("Enter any number OR press 0 to stop ");
		scanf("%d", &num);
	}		
	}
	else
	{
		printf("Input only positive numbers");
	}
	average=sum/count;
	printf("\n\nAverage= %f", average);
	printf("\nSUM= %f", sum);
}