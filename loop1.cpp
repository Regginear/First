//number after entered number
#include<stdio.h>
int main()
{
	int a,b;
	printf("Enter the number ");
	scanf("%d", &a);
	printf("Enter the limit ");
	scanf("%d", &b);
	for(int i=1;i<=b;i++)
	{
		a++;
		printf("%d\n", a);
	}
}