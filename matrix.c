//3X3 MATRIX
#include <stdio.h>
int main()
{
	float m[3][3],m1[3][3],sum[3][3],dif[3][3],mul[3][3];
	int i,j,k;
	//ENTERING OUR FIRST MATRIX
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("Enter matrix1[%.2f][%.2f]:",i+1,j+1);
			scanf("%f",&m[i][j]);
		}
	}
	//PRINTINGB OUR FIRST MATRIX
	i=0;
	j=0;
		for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%.1f\t",m[i][j]);
		}
		printf("\n");
	}
	//ENTERING OUR SECOND MATRIX
	i=0;
	j=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("enter matrix2[%.2f][%.2f]:",i+1,j+1);
			scanf("%d",&m1[i][j]);
		}	
	}
	//PRINTG OUR SECOND MATRIX
	i=0;
	j=0;
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			printf("%.2f\t",m1[i][j]);
		} 
		printf("\n");
	}
	// OUR CALCULATION STARTS
	//WORKING OUT ADDITION
	printf("----------------------------------------\n");
	printf("ADDITION\n\n\n");
	printf("Sum of the two matrices\n\n");
    for(i=0;i<3;i++)
    {
			for(j=0;j<3;j++)
			{
				sum[i][j]=(m[i][j])+(m1[i][j]);
				printf("%.2f\t",sum[i][j]);
			}
	printf("\n");	
    }
    printf("\n");
    //WORKING OUT SUBSTRACTION
    printf("----------------------------------------\n");
    printf("SUBTRACTION\n\n\n");
    printf("difference of two matrices\n\n");
    for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
		dif[i][j]=m[i][j]-m1[i][j];
		printf("%.2f\t",dif[i][j]);
		}
		printf("\n");
	}
	//WORKING OUT MULTIPLICATION
     printf("------------------------------------------\n");
     printf("MULTIPLY\n\n\n");
	printf("\n");
	printf("multiplying the two matrix\n\n");
	for(i=0;i<3;i++)
	{
		for(j=0;j<3;j++)
		{
			for (k=0;k<3;k++)
			{
				mul[k][j]=m[k][j]*m1[k][j];
			}
			mul[i][j]=mul[k][j];
			printf("%.2f\t",mul[i][j]);
		}
		printf("\n");
	}
	printf("*THE END*\n");
	printf("--------------------------------------------\n");
	return 0;
}