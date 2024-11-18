//bitwise operator
#include<stdio.h>
int main()
{
	int dev_id;
	printf("Enter Device ID: ");
	scanf("%d", &dev_id);
	int mask_and=0xFF;
	int mask_or=0xAA;
	int mask_xor=0x55;
	int result_and=dev_id&mask_and;
	int result_or=dev_id|mask_or;
	int result_xor=dev_id^mask_xor;
	printf("\n\nDevice ID: %d", dev_id);
	printf("\nAnd Result: %d", result_and);
	printf("\nOR Result: %d", result_or);
	printf("\nXOR Result: %d", result_xor);	
}