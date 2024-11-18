//reverse
#include<stdio.h>
int main()
{
	int a,n,rev=0,rem;
	scanf("%d", &a);
	n=a;
	while(n!=0)
	{
		rem=n%10;
		rev=rev*10+rem;
		n=n/10;
	}
	printf("%d", rev);
}