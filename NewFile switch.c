#include<stdio.h>

int main()
{
	int slices;
	printf("how many slices did you eat\n");
	fflush(stdin);
	scanf("d",&slices);
	
	switch(slices)
{
	case 1 :
	{
		printf("well done\n");
		break;	
	}
	
	case 2 :
	{
		printf("only two boy\n");
		break;	
	}
	
	case 3 :
	{
	printf("only four\n");
		break;	
	}
		
	case 4 :
	{
	printf("only four\n");
		break;	
	}
		
	default :
	{
		printf("o my god");
		break;	
	}
	
	}
	return 0;
}