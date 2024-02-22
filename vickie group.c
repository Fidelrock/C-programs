#include<stdio.h>
#define length 10
int main()
{
    int divide_10[]={2,3,4,5,6,7,8,9,10,11};
    int tenvalues[10];
    int i,j,rem,divide;

    printf("\tENTER 10 INTEGER VALUES\n");
    for( i =0; i<10; i++)
    {
        printf(": ");
        scanf("\t%d",&tenvalues[i]); 
    }
    printf("\n");
    for (j=0; j < 10; j++)
    {
        for(i = 0; i<10; i++)
        {
            divide = (tenvalues[i])/(divide_10[j]);
            printf("%d divided by %d = %d\n",tenvalues[i],divide_10[j],divide);
            rem = (tenvalues[i]%divide_10[j]);

            if(rem == 0)
            {   
                printf("Remainder = 0\n");
                printf("%d is divisible by %d\n\n",tenvalues[i],divide_10[j]);
            }else
            {
                printf("Remainder = %d\n%d not divisible by %d\n\n",rem,tenvalues[i],divide_10[j]);
            }
    }}

     return 0;
}