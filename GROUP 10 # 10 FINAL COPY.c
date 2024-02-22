/*This program is to test the divisibility test of 
*2,3,4,5,6,7,8,9,10 & 11 respectively*/

#include<stdio.h>
#include<conio.h>


int main()
{
    int divisor[]={2,3,4,5,6,7,8,9,10,11};
    int values[10];
    int i,j;
	int rem,divide;

	// We specify the addresses of the values using variable i
	
    printf("\tENTER 10 INTEGER VALUES TO TEST THE DIVISIBILITY\n");
    
    for( i =0; i<10; i++)
    { 
    	do
    	{
		printf(": ");
		
		scanf("%d",&values[i]);
		
		// This part executes only when the value is zero
		
		if(values[i]<=0){printf("THE VALUE MUST BE GREATER THAN ZERO\n");}
		
		}while(values[i]<=0);
				 
    }
    printf("\n\n");
    
    //We identify the address location of the divisors using variable j
    
    for (j=0; j < 10; j++)
    {
        for(i = 0; i<10; i++)
        {
            divide = (values[i])/(divisor[j]);
            
            rem = (values[i]%divisor[j]);
            
            // Below is the specific format that we want the output to be in

            if(rem == 0)
            {   
            	printf("%d/%d = %d Rem %d(it is divisible by %d)\n",values[i],divisor[j],divide,rem,divisor[j]);
                
				printf("\n");
               
            }else
            {
            	printf("%d/%d = %d Rem %d(it is not divisible by %d)\n",values[i],divisor[j],divide,rem,divisor[j]);
                
				printf("\n");
            }
 	    }	
	}

	getch();
     return 0;
}