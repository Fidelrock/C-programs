#include<stdio.h>
#include<windows.h>
/*THIS PROGRAM WILL PRINT THE RECEPT
UPDATE THE RECORD
WILL SUM THE NEW TOTAL 
THE PAYMENT IS RESTRICTED WITH THE KENYAN ONE NOTE CURRECY EG 50,100,200,500,1000,
NO PAYMENT IS TO BE DONE OUTSIDE THOSE CURRECY 
IT HAS TWO OPTIONS OF PAYMENT ONCE PAYMENT OR INDIVIDUAL
THE MAXIMUM NUMBER OF CLIENTS ARE 11 AND MIN IS 1
IT CAN BE USED IN HOTELS
ONLY 3 PRODUCTS ARE AVAILABLE 

ENJOY THE PROGRAM */
char items [3] ={'A','B','C'};//nmber of the items available
float prices [3]={10,8,9};//prices of each items
int fix_client=10;//this is the default number of clients
void header();//contains the hearder of the program
int change_clients();
void products();
void byee();
float price_of_A();
float price_of_B();
float price_of_C();
float pay_once(float total_price,float a,float b,float c);
float pay_individual(int user_number ,float amount,float tt,float a,float b,float c);
void table_of_prices(int client,float pA,float pB,float pC,float P_A_B_C_T);
void recept(int client,float amount,float balance, float bl, float tta,float ttb,float ttc,float amt);
int main ()
{
	char change;
	float pA[11],pB[11],pC[11],P_A_B_C_T[11],T_AMT;
	float pAT=0,pBT=0,pCT=0,pTT=0;
	header();
	printf("\nThe default number of clients is 10 Do you wish to change?\npress(1)yes or any key then <enter> or <enter> to continue\n");
	scanf("%c",&change);
	if(change=='1')
	{
		fix_client=change_clients();
		system("cls");
		header();
		printf("\nThe number of clients has changed successfully to %d \n",fix_client);
	}
	else
	{
		system("cls");
		header();
		printf("\nthe number of the clients remains the same as %d\n",fix_client);
	}
	products();
	int no=1;
	int count =fix_client;//clients
	do
	{
		printf("client: %d ",no);
		pA[no-1]=price_of_A();
		pB[no-1]=price_of_B();
		pC[no-1]=price_of_C();
		P_A_B_C_T[no-1]=pA[no-1]+pB[no-1]+pC[no-1];//vertical total prices
		system("cls");
		header();
		printf("\n number of clients are %d",fix_client);
		products();
		printf("\n");
		no++;
		count--;	
	}while(count>0);
	printf("prices in Kenyan shillings\n");
	 printf("\n client	|	priceA	|	priceB	|	priceC	|	total	");
	 printf("\n--------+---------------+---------------+---------------+------------------");
	 int i=0;
	 for(i=0;i<fix_client;i++)
	 {
	 	table_of_prices(i+1,pA[i],pB[i],pC[i],P_A_B_C_T[i]);
	 	pAT+=pA[i];
		   pBT+=pB[i];
		   pCT+=pC[i];
		   pTT+=P_A_B_C_T[i];
		   T_AMT=pTT;//to store the total price to be used below
	 }
	 printf("\nTotal:  |	 %.2f	|	 %.2f	|	 %.2f	|	 %.2f	\n\n",pAT,pBT,pCT,pTT);
	 printf("\nDo you preffer to pay individually or do you want to pay once\n");
	 printf("press   (1)individually::\n	 (2)once payment::\n");
	 tryagain:
	 getchar();//to avoid jumping next output
	 char option;
	 int user;
	 scanf("%c",&option);
	 switch(option)
	 {
	 	case '1':
	 		{
	 			while(pTT !=0)
	 			{
	 				usa:
	 				printf("\n enter client number::");
					scanf("%d",&user);
					  	if(user<1||user>fix_client)//to make sure the user enters the required range
						  {
						  	printf("user not found\n please enter diffent user\n");
						  	goto usa;
						  }
						  if(P_A_B_C_T[user-1]==0)//To avoid re-entering the client entered before
						  {
						  	printf("user already has cleared his balance enter different user\n");
						  	goto usa;
						  }	
						  P_A_B_C_T[user-1]=pay_individual(user, P_A_B_C_T[user-1],pTT,pA[user-1],pB[user-1],pC[user-1]);
						  pTT=0;
						  printf("\n client	|	priceA	|	priceB	|	priceC	|	OUTSTANDING CHARGES	");
						  printf("\n--------+---------------+---------------+---------------+------------------");
						  for(i=0;i<fix_client;i++)
							 {
							 	table_of_prices(i+1,pA[i],pB[i],pC[i],P_A_B_C_T[i]);
								pTT+=P_A_B_C_T[i];
							 }
							 printf("\nTotal:  |	 %.2f	|	 %.2f	|	 %.2f	|	 %.2f	\n\n",pAT,pBT,pCT,pTT);//horizontal total prices
				}
				printf("\nall payment are done successfully and total amount of KSH.%.2f paid to the company::\nwelcome back again\n\n",T_AMT);
				byee();
		  		 break;
			}
		case '2':
			{
				int payment;
			 	payment=pay_once(pAT,pBT,pCT,pTT);
			 	if(payment==1)
			 	{
			 		goto usa;
				 }
				 break;
			}
		default:
		{
			{
	 	   	   	   	printf("\n invalid option ");
	 	   	   	   	goto tryagain;
	 	  }
		}
	 }
	 return 0;
}
void header()
{
	printf("\n\t\t\t___________________________________________________________________________");
	printf("\n\t\t\t|*|			welcome to group one warehouse			|*|");
	printf("\n\t\t\t|*|		   	our services are available		    	|*|");
	printf("\n\t\t\t|*|			  our pleasure to serve you 			|*|");
	printf("\n\t\t\t|*|*********************************************************************|*|");
}
int change_clients()
{
	int clients,cout =3;
	while((clients<=0||clients>11)&& cout>=0)
	{
		printf("Enter the number of clients\n");
			scanf("%d",&clients);
	         if((clients<=0||clients>11))
				 {	
				 system("cls");
				 header();	 
				 printf("\n\n\t\tsorry we can only deal with clients that are from 1 to 11 you have %d trials\n",cout);
				 getchar();//scanf("%c"); clearing buffer//when the program  jumps some question to avoid we use 
				 cout--;	
				}
			else
				{
					return clients;
				}
				
	}
			printf("\n you are out of the trials");
			exit (0);
}
void products()
{
	int i;
	for(i=0;i<3;i++);
	{
		for(i=0;i<3;i++)
	 	{
	 		printf("\n\t\t%d.%c price =%.2f\n",i+1,items[i],prices[i]);
		}
	}
}
float price_of_A()
{
	int quantity;
	a:
	printf("enter the quantity for A\n");
		scanf("%d",&quantity);
		if(quantity<1||quantity>3)
		{
			printf("quantity should be between 1 to 3\n");
			goto a;//as a used above
		}
		return (prices[0]*quantity);
}
float price_of_B()
{
	int quantity;
	b:
	printf("enter the quantity for B\n");
		scanf("%d",&quantity);
		if(quantity<1||quantity>3)
		{
			printf("quantity should be between 1 to 3\n");
			goto b;
		}
		return (prices[1]*quantity);
}
float price_of_C()
{
	int quantity;
	c:
	printf("enter the quantity for C\n");
		scanf("%d",&quantity);
		if(quantity<1||quantity>3)
		{
			printf("quantity should be between 1 to 3\n");
			goto c;
		}
		return (prices[2]*quantity);
}
void table_of_prices(int client,float pA,float pB,float pC,float P_A_B_C_T)
{
	
		printf("\n %d.	| 	 %.2f	|	 %.2f	|	 %.2f	|	 %.2f	",client,pA,pB,pC,P_A_B_C_T);
	       printf("\n--------+---------------+---------------+---------------+------------------"); 
}
float pay_individual(int user_number ,float amount,float tt,float a,float b,float c)
{
	float pay,balance;
	 amnt:
			printf( "\nEnter amount::\n");
		    scanf ("%f",&pay);
			if(!(pay ==50||pay ==100||pay ==200||pay ==500||pay ==1000))
				 {
					printf("\amount is not inline with kenyan note currency\n amount should be 50,100,200,500,1000::\nenter different amount");
					goto amnt;
				 }
			if (pay <amount)//if the amount entered by the user is less than the amount rquired to be paid
				{
					balance=amount-pay;
					tt-=pay;
				recept(user_number,pay,balance, 0.00, a,b,c,amount);
					return balance;
			    }
			else if(pay >=amount)
			{
				balance=pay-amount;
				recept(user_number,pay,0.00, balance, a,b,c,amount);
				tt-=amount;
				return 0;
			}
}
float pay_once(float a,float b, float c,float total_price)
{
	float amount;
	ramnt:
	printf( "\nEnter amount to pay\n");
	scanf ("%f",&amount);
	if(!(amount==50||amount==100||amount==200||amount==500||amount==1000))
		 {
			printf("\amount is not inline with kenyan note currency\n amount should be 50,100,200,500,1000::\nenter different amount");
			goto ramnt;
		  }			  
	if(amount<total_price)
		{
			printf("\t\tINSUFFINCIENT AMOUNT \n");
			MessageBox(0,"INSUFFICIENT AMOUNT","WARNING!!!",0);
			printf("Do you what to pay individually incase::\n");
			printf("press (1) for yes and (2) for No or any value to terminate the program\n");
			getchar();//clearing buffer
			char option;
			option=getchar();
			if(option=='1')
				{
					return 1;
				}
			else if(option=='2')
				{
					goto ramnt;
				}
			else
				{
					printf("program terminated successfull\n");
					exit (0);//found in windows .h file
				}
		}
			float balance=0;
			balance=amount-total_price;
			recept(1,amount,0.00,balance, a,b,c,total_price);
	       printf("all payment are done successfully and total amount of KSH.%.2f paid to the company::\nwelcome back again\n\n",total_price);
	    	 printf("thank you for shopping with us \nwelcome again!!\n\n");
}
void byee()
{
	int k;
	printf("welcome again byeeeee ");
	 system("color 3f");
	 for(k=0;k<30;k++)
	 {
	 	printf("\xdb");
	 	Sleep(50);
	 }
	 MessageBox(0,"welcome again dear client\n   pleasure to have you","\tGROUP1 WAREHOUSE",0);//for feedback of aprreciation
}
void recept(int client,float amount,float balance, float bl, float tta,float ttb,float ttc,float amt)
{
	//recept(user_number,pay,balance, 0.00, a,b,c,amount);
	printf("\n\t\t\t|=======================================|");
	printf("\n\t\t\t|	\t %s 		|",__DATE__);
	printf("\n\t\t\t|	\t %s 		|",__TIME__);
	printf("\n\t\t\t|	     GROUP1 WAREHOUSE		|");
	printf("\n\t\t\t|	 our preisure to serve you	|");
	printf("\n\t\t\t|	client %d.			|",client);
	printf("\n\t\t\t|	******************************	|");
	printf("\n\t\t\t| 	item	  quantity	price	|");
	printf("\n\t\t\t|	=============================	|");
	printf("\n\t\t\t|	A	     %.2f	%.2f	|",(tta/prices[0]),tta);
	printf("\n\t\t\t|	B	     %.2f	%.2f	|",(ttb/prices[1]),ttb);
	printf("\n\t\t\t|	C	     %.2f	%.2f	|",(ttc/prices[2]),ttc);
	printf("\n\t\t\t|	TOTAL:	     %.2f	 %.2f	|",((tta/prices[0])+(ttb/prices[1])+(ttc/prices[2])),amt);
	printf("\n\t\t\t|	PAID			%.2f	|",amount);
	printf("\n\t\t\t|	BALANCE			%.2f	|",bl);
	printf("\n\t\t\t|	OUTSTANDING CHARGES 	%.2f	|",balance);
	printf("\n\t\t\t|	============================	|");
	printf("\n\t\t\t|	SERVED BY GROUP1 ADMIN		|");
	printf("\n\t\t\t|	WELCOME BACK AGAIN!!		|");
	printf("\n\t\t\t|_______________________________________|");
	printf("\n\n\n");
	byee();
}

