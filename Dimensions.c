#include<stdio.h>
#include<conio.h>
#include<math.h>

#define PI 3.142


int main(int argc, char** argv)
{
	// DECLARING VARIABLES
	
	float d,h;
	float SA;
	float dim;
	float r;
	float vol;
	
	
	start:
	printf("enter the height of the cylinder in metres\n");
	scanf("%f",&h);
	
	printf("enter the diameter of the cylinder in metres\n");
	scanf("%f",&d);
	// WE ARE EXPECTING A VALUES FROM THE USER WHICH ARE GREATER THAN ZERO
	
		do
	{
		printf("Height= %.3f\t Diameter= %.3f",h,d);
		
		fflush(stdin);// This prevents collisions of the inputs
		
		if(h<=0||d<=0)
		{
		printf("\nTHE VALUES MUST BE GREATER THAN ZERO\n");	
		goto start;
		}
	}while(h<=0||d<=0);
	
	 r= (d/2.0);
	 
	 printf("\tRadius: %.3f",r);
	
	(SA=((2*PI*((r)*(r)))+(PI*d*h)));
	
	printf("\n\n BELOW ARE THE DIMENSIONS OF A CUBE THAT WOULD RESULT FROM THE CYLINDER\n\n");
	
	 dim= (sqrt( SA/6.0));
	
	printf(" \t\t\t%.3fm length\n\t\t\t %.3fm width\n\t\t\t %.3fm height\n",dim,dim,dim);
	
	(vol= ((PI*r*r) * h));
	
	printf("\n The volume of the cylinder:%.3f\t The volume of sphere:%.3f",vol,vol);
	
	getch();
	
	
	
	
	
	
	
	return 0;
}
