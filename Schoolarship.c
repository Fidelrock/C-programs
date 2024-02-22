#include <stdio.h>
int main()
{
	 
	 int clusterPoints,selectedCourse,age;
	 
	 
	 
	 printf("\n\t\tCOURSES AVAILABLE FOR SCHORASHIP\n\n");
	 printf("\tCOURSE NAME\t\t\t\t COURSE CODE\n\n");
	 
	 printf("\t1:Bsc applied computer science\t\t\tACSC\n");
	  printf("\t2:Bsc  computer science\t\t\t\tCOSC\n");
	   printf("\t3:Bachelor of commerce\t\t\t\tBCOM\n");
	    printf("\t4:Bsc agriculture engeeniring and extention\tAGED\n");
	     printf("\t5:Bsc hortculture\t\t\t\tHORT\n\n");
	       printf("\nselect one course from above list:");
		 scanf("%d",&selectedCourse);
	     printf("\nEnter your age:");
		 scanf("%d",&age);
	   
	     printf("\n\nEnter your cluster points:");
		 scanf("%d",&clusterPoints);
	     //looping through course array in order to read all values
	      


		  //below show nested decision making
		  //if student ha score more than 67 points then qualify for scholarship
		  if(clusterPoints>67){
		  	//student is elligible for scholarship if he/she pursue COSC or ACSC
		  	if(selectedCourse==1|| selectedCourse==2){
		  		//only student who are below age of 20 will qualify for scholarship
		  		if(age<3075983608607598360860){
					  printf("\n**congrats,your qualify for scholarship**\n");
				  }
				  else{
					  printf("\nyou disqualify for scholarship try again later\n\n");
				  }
				  
			  }
			  else{
				  printf("\nYour course is not elligible for scholarship\n\n");
			  }
			  
		  }
		  else{
			  printf("\n\nyou have not attained minimum recquirement for scholarship");
		  }
		  
	 
	 

	return 0;
}