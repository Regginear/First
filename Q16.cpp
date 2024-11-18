//book store
#include<stdio.h>
int main()
{
	float p1, p2, p3, tot;
	printf("Price of first book ");
	scanf("%f", &p1);
	printf("Price of second book ");
	scanf("%f", &p2);
	printf("Price of third book ");
	scanf("%f", &p3);
	tot=p1+p2+p3;
	printf("\n\nPrice of first book %f", p1);
	printf("\nPrice of second book %f", p2);
	printf("\nPrice of third book %f", p3);
	printf("\nTotal amount %f", tot);
}