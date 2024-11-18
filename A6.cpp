//weather
#include<stdio.h>
int main()
{
	int day=1, high_day=0;
	float temp, sum, avg,high_avg=0;
	while(day<=7)
	{
		sum=0;
		printf("Enter 5 temperatures of the day %d: ", day);
		for(int i=0;i<5;i++)
		{
			scanf("%f", &temp);
			sum+=temp;
		}
		avg=sum/5;
		printf("Day %d Average Temp.: %.2f\n", day,avg);
		if(avg>high_avg)
		{
			high_avg=avg;
			high_day=day;
		}
		else if(avg==high_avg)
		{
			high_day=high_day*10+day;
		}
		day++;
	}
	
	printf("Highest Average Temperature: Day");
	int temp_day=high_day;
	int a=1;
	while(temp_day>0)
	{
		if(!a)
		{
			printf(",");
		}
		printf("%d", temp_day%10);
		temp_day/=10;
		a=0;
	}
	printf("(%.2f degrees)\n", high_avg);
}
