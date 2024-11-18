//calc
#include<stdio.h>
int main()
{
	int a,b,ch;
	printf("WELCOME TO CALCULATOR PROGRAM.....");
	printf("\n1. ADDITION 2. SUBSTRACTION 3. MULTIPLICATION 4. DIVISION");
	printf("\nENTER TWO NUMBERS \n");
	scanf("%d", &a);
	scanf("%d", &b);
	printf("\nENTER YOUR CHOICE.....");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:printf("Addition= %d", a+b);
		break;
		
		case 2:printf("Substraction= %d", a-b);
		break;
		
		case 3:printf("Multiplication= %d", a*b);
		break;
		
		case 4:
		{
			if(b>0)
			printf("Division= %d", a/b);
			else
			printf("Division not possible divide by zero");
		}
		break;
		
		default:printf("SORRY WRONG INPUT");
		break;
	}
}