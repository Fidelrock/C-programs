#include<stdio.h>
int main(int argc, char** argv)
{
	int i,j;
	for (i=1;i<101;i++)
	{
		for(j=1;j<51;j++)
		{
		if(i==(j*2)+1)
		{
			printf(" %d ",i);
		}
		}
	
	
		
	}

	return 0;
}