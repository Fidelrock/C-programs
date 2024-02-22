#include<stdio.h>
int main()
{
    int max,min,operation,sum;
    int count=0;
//prompt user to enter maximum and minimum value
//while(count < 3){
start:
while(count < 3){
    printf("\nEnter maximun value: ");
    scanf("%d",&max);
    printf("\nEnter minimum value: ");
    scanf("%d",&min);
    if(min >= max){
        
        printf("\n\nMinimum number greater than maximum\nPlease try again\n\n");
    count++;
    goto start;
    }
    }
    //goto start;
//list of all the operation
contoperations:
    printf("\tNUMBER\t\t\t OPERATION\n\n");
    printf("\t1.\t\t\\t prints maximum to minimum values\n");
    printf("\t2.\t\t\\t prints all numbers divisible by 5 and 7\n");
    printf("\t3.\t\t\\t prints sum of all the numbers from maximum to minium\n");
    printf("\t4.\t\t\\t prints the sum of all the squares between maximun and minimum values\n");
    printf("\t5.\t\t\\t skips numbers 37,100 and 250\n");
    //prompt user to choose operation of choice   
    printf("\nChoose an operation(1-5): ");   
    scanf("%d",&operation);   
    
if(operation==1)
//prints all values between max and min
{   
do
{       
printf("\t%d",min);       
min++;   
}
while (min <= max);
}
else if(operation==2){
//numbers divisible by both 5 and 7         
do
{                   
if ((min%7 == 0) && (min%5==0))           
{               
printf("\t%d",min);           
}            
min++;       
}       
while (min <= max);            
}
else if(operation==3)
//sum of all numbers   
{       
do
{
(sum += min);
min++;
} 
while(min <= max);
{
printf("sum = %d\n",sum);
}
}
else if(operation==4)
//sum of all squares between minimum and maximum
{
do
{
(sum +=(min*min));

min++;
}
while(min<=max);
{
    printf("sum of squares = %d",sum);
}
}                     
else if(operation==5)
//skips values 37, 100 and 250      
{           
do
{               
if((min !=37) && (min!=100) && (min!=250))
{                   
printf("\t%d",min);               
}               
min++;           
}
while(min<=max);       
}               
return 0;
}