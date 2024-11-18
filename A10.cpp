//utility bill
#include<stdio.h>
int main()
{
	int ch;
	int units;
	float tot;
	printf("WELCOME TO UTILITY BILL CALCULATION");
	printf("\nPRESS....\n1 FOR RESIDENTIAL");
	printf("\n2 FOR COMMERCIAL\n3 FOR INDUSTRIAL");
	printf("ENTER YOUR CHOICE....\n");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1: printf("Units consumed: ");
				scanf("%d", &units);
				tot=5*units;
				printf("Total Bill: %f", tot);
				break;
				
		case 2: printf("Units Consumed: ");
				scanf("%d", &units);
				tot=8*units;
				printf("Total Bill: %f", tot);
				break;
				
		case 3: printf("Units Consumed: ");
				scanf("%d", &units);
				tot=10*units;
				printf("Total Bill: %f", tot);
				break;	
	}
}