//positive number sum
#include<stdio.h>
int main()
{
	int num,sum=0;
	do
	{
		printf("Enter the number(Enter -1 to stop): ");
		scanf("%d", &num);
		if(num>0)
		{
			sum=sum+num;
		}
	}while(num!=-1);
	printf("Sum of numbers is: %d", sum);
}