/*HEUDIA GROUP
I.E.B.C PRESIDENTIAL REQUIREMENT*/
#include<stdio.h>
int main(){
	int citizenship;
	int age;
	int title;
	char ENTER;
	printf("Welcome to login portal\n");
	printf("press Enter to continue\n");
	scanf("%c",&ENTER);
	//our login process starts
	if(ENTER=='\n')
	{
	//declaring the seat to vie for
		printf("who do you wish your title to be\n");
		printf("press(1)For President\npress(2)For others \n");
		scanf("%d",&title);
		//title selected
		if(title==1)
			//checking conditions for country and Citizenship
		{
		printf("which Country are you from?\n");
		printf("press(1)For Kenya\npress(2)Foreigner\n");
		scanf("%d",&citizenship);
		
		//confirming the age
        	if(citizenship==1)
		    { 
			printf("Your Age is essential\n");
			printf("Enter your Age\n");
			scanf("%d",&age); 
			
			//returning the response if age is above 
			    if(age>34&&age<90)
			     {
				printf("\n\n------------------------------------------");
				printf("\nYou succesfully qualify for presidential Elections\n");
			    printf("------------------------------------------\n\n");
			      }
		      	else {
				printf("OOps sorry try next time");
		        	}
	       	}
	     	else if (citizenship==2){
			printf("Sorry foreigners can't be elected \n");
		       }
		}
		   else if (title==2){
			printf("oops sorry\n only president is required to login\n");
			}
		else{
			printf("Incorrect input\nREAD CAREFULLY\n");
		}
		
	}

	
	return 0;
	
}