//laboraory 
#include<stdio.h>
int main()
{
	int exp[7][5];
	int tot_min,i;
	for(i=0;i<7;i++)
	{
		printf("Enter duration of day %d: ", i+1);
		for(int j=0;j<5;j++)
		{
			scanf("%d", &exp[i][j]);
		}
	}
	for(i=0;i<7;i++)
	{
		for(int j=0;j<5;j++)
		{
			tot_min+=exp[i][j];
		}
		printf("Day %d Total Time %d minutes", i+1,tot_min);
		if(tot_min>480)
		{
			printf("( Exceeds 8 hours)");
		}
		printf("\n");
	}
}