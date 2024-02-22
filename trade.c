//Trade center
#include<stdio.h>
#include<conio.h>
int main(int argc, char** argv)
{
	int A,B,C;
	float cost_A,amount,discount;
	float cost_B;
	float cost_C;
	printf("\t\t\tWelcome to sokomoko We have three commodities A,B,C\n");
	printf("\t\t\tYou can choose to buy any\n\n");
	printf("Enter the amount of commodity A to purchase \n");
	scanf("%d",&A);
	printf("Enter the amount of commodity B to purchase \n");
	scanf("%d",&B);
	printf("Enter the amount of commodity C to purchase \n");
	scanf("%d",&C);
	cost_A= A*10.0;
	cost_B=B*50.0;
	cost_C= C*30.0;
	printf("\n\n");
	if(A>=50)
	{
		discount= cost_A * 0.1;
		amount= cost_A-discount;
		printf("Your discount is ksh %.2f of commodity A" ,discount);
		printf("\nPay ksh %.2f of commodity A\n",amount);
		
	}
	else
	{
	printf("Pay ksh %.2f of commodity A\n ",cost_A);	
	}
	printf("\n\n");
	amount=0;
	discount=0;
	if(B>=15)
	{
		discount= cost_B * 0.15;
		amount= cost_B-discount;
		printf("\nYour discount is ksh %.2f of commodity B",discount);
		printf("\nPay ksh %.2f of commodity B",amount);
		
	}
	else
	{
	printf("Pay ksh %.2f of commodity B\n",cost_B);	
	}
	printf("\n\n");
	amount=0;
	discount=0;
	if(C>=20)
	{
		discount= cost_C * 0.05;
		amount= cost_C-discount;
		printf("\nYour discount is ksh %.2f of commodity C",discount);
		printf("\nPay ksh %.2f of commodity C",amount);
		
	}
	else
	{
	printf("Pay ksh %.2f of commodity C\n",cost_C);	
	}
	getch();
	return 0;
}