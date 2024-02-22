 #include<stdio.h>
#include<conio.h>
#include<math.h>
#define PI 3.142
float SA(float h,float r);
float volume_cy(float h,float r);
float dim(float r,float h);
float cone(float r,float h);
int main(int argc, char** argv)
{
	// DECLARING VARIABLES
	
	float h;
	float r;
	float res;
	
	start:
	
	
	printf("enter the height of the cylinder in metres\n");
	scanf("%f",&h);
	printf("enter the radius of the cylinder in metres\n");
	scanf("%f",&r);
		do
	{
	printf("Height= %.3f\t radius= %.3f",h,r);
		
		fflush(stdin);// This prevents collisions of the inputs
		
		if(h<=0||r<=0)
		{
		printf("\nTHE VALUES MUST BE GREATER THAN ZERO\n");	
		goto start;
		}
	}while(h<=0||r<=0);
	
	res=SA(r,h);
	printf("The surface area of the cylinder is%f \n",res);
	res=volume_cy(r,h);
	printf("The volume of the cylinder is %f\n",res);
	res=dim(r,h);
	printf("The dimensions of the cube is lenth=%f\t width=%f\t  height=%f\t ",res,res,res);
	res=cone(r,h);
	printf("The height of the cone is %f \n",res);
	getch();
	return 0;
}
float SA(float r,float h)
{
	float res;
	printf("\n");
	res=(((2*PI*((r)*(r)))+(PI*(r+r)*h)));
	return res;
}	
float volume_cy(float r,float h)
{
	float res;
	printf("\n");
	res=(PI*r*r)*h;
	return res;
}
float dim(float r,float h)
{
	float res;
	printf("\n");
	res=sqrt (((2*PI*((r)*(r)))+(PI*(r+r)*h)))/6.0;
	return res;
}
float cone(float r,float h)
{
	float res;
	res=3.0*h;
	return res;
}	
