//area
#include<stdio.h>
int main()
{
	int a,b,ch;
	printf("WELCOME TO AREA PROGRAM.....");
	printf("CHOICES ARE \n1. AREA OF RECTANGLE 2. AREA OF CIRCLE 3. AREA OF TRIANGLE");
	printf("\nENTER YOUR CHOICE.....\n");
	scanf("%d", &ch);
	switch(ch)
	{
		case 1:
			{
				float l,b,area;
				printf("Enter length and breadth \n");
				scanf("%f%f", &l,&b);
				area=(l*b);
				printf("Area= %f", area);
			}
		break;
		
		case 2:
			{
				float r,area;
				printf("Enter the radius ");
				scanf("%f", &r);
				area=3.14*r*r;
				printf("Area= %f", area);
			}
		break;
		
		case 3:
			{
				float b,h,area;
				printf("Enter the base and height ");
				scanf("%f%f", &b,&h);
				area=0.5*b*h;
				printf("Area= %f", area);
			}
		break;

		default:printf("SORRY WRONG INPUT");
		break;
	}
}