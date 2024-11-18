//celsius to fahrenheit
#include<stdio.h>
int main()
{
	float celsi, fahren;
	printf("Celsius: ");
	scanf("%f", &celsi);
	fahren=celsi*9/5+32;
	printf("\n\nCelsius: %f", celsi);
	printf("\nFahrenheit: %f", fahren);
}