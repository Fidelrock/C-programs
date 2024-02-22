//Binary search tutorial
#include<stdio.h>
int main(int argc, char** argv)
{
	int n,sn,first,last,mid,flag=0;
	int i,a[50];
	
	printf("Enter the number of items to store into the array \n");
	scanf("%d",&n);
	 
	// Entering the values of the array
	printf("Enter the %d elements of the array \n",n);
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	//Binary search the array
	printf("Enter the number to search \n");
	scanf("%d",&sn);
	while(first<=last)
	{
		mid=(first+last)/2;
		if(sn==a[mid])
		{
			flag=1;
			break;
		}
		else if(sn>a[mid])
		{
			first= mid + 1;
		}
		else
		{
			last=mid-1;
		}
			
	}
	fflush(stdin);
	if(flag==1)
	{
		printf("\nNumber is found at position %d",mid +1);
	}
	else
	{
		printf("\nNumber not found");
	}
	return 0;
}
	