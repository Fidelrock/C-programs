//Linear search array
#include<stdio.h>
int main()
{
	int a[50];
	int n, i, j, sn;
	int m=0;
	printf("Enter the number of items to store in an array\n");
	scanf("%d",&n);
	//Entering the Array values
	printf("Now enter the %d numbers to store in the array \n",n);
	for(i=0 ;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	
	printf("Now enter the number to search in the array\n");
	scanf("%d",&sn);
	fflush(stdin);
	for(j=0;j<n;j++)
	{
	if(sn==a[j])
		{
			printf("The number is found at position %d",j+1);
			m=1;
		}
	
	}
	 if(m==0)
	{
		
		printf("\nThe number not found");
	}
	return 0;
}
