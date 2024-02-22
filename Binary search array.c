//Binary search
#include<stdio.h>
int main(int argc, char** argv)
{
	int n,sn,first,last,mid;
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
	for(i=0;i<n;i++)
	{
		
	
		first=1;
		last= n;
		
	while(first<=last)
	{
		mid= (first + last)/2 ;
		
		 if(sn<a[mid])
		{
			last=mid-1;
		}
		else
		{
			first= mid+1;
		}
	}
	}	
		if(sn==a[mid])
		{
			printf("The number is found at position %d",mid);
		}
		else if(last==mid-1)
		{
			printf("The number is found at position %d",first);
		}
		else
		{
			printf("The number is found at position %d",last);
		}
	
	
	return 0;
}