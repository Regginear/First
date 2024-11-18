//Switch
#include<stdio.h>
int main()
{
	char ch;
	printf("WELCOME TO GOURMETBITE!!!!!");
	printf("MENU IS:  \nB FOR BURGER\nP FOR PIZZA");
	printf("\nS FOR SALAD\nD FOR DESSERT\nC FOR COFFEE");
	printf("\n\nENTER YOUR DISH CODE....    ");
	scanf("%c", &ch);
	switch(ch)
	{
		case'B'||'b':printf("PRICE: 150 units");
		break;
		case'P': printf("PRICE: 200 units");
		break;
		case'S': printf("PRICE: 100 units");
		break;
		case'D': printf("PRICE: 80 units");
		break;
		case'C': printf("PRICE: 50 units");
		break;
		default: printf("<<<<<SORRY WRONG INPUT>>>>>>");
		break;
	}
}