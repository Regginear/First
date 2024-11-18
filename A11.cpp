//decimal to binary
#include<stdio.h>
int main()
{
	int decimal,binary=0,base=1,rem;
	printf("Enter Number: ");
	scanf("%d", &decimal);
	int n=decimal;
	while(n>0)
	{
		rem=n%2;
		binary=binary+rem*base;
		n=n/2;
		base=base*10;
	}
	printf("Binary Representation is: %d", binary);
}