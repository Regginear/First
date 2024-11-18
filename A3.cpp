//truncation
#include<stdio.h>
int main()
{
	float l,w;
	printf("Length: ");
	scanf("%f", &l);
	printf("Width: ");
	scanf("%f", &w);
	int l1=(int)l;
	int w1=(int)w;
	printf("\n\nInteger Length: %d", l1);
	printf("\nInteger Width: %d", w1);
}