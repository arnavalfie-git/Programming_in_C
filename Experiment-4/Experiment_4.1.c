/* WAP to enter numbers till the user wants. At the end, it should display the count of positive, negative, and Zeroes entered.*/

#include <stdio.h>

int main(){
	
	int c, p = 0, n = 0, z = 0;
	int k;
	
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	
	do{
		printf("Enter the number :");
		scanf("%d",&c);
		
		if(c>0){
			p++;
		}
			
		else if(c<0){
			n++;
		}
		else{
			z++;
		}
		
		printf("Do you want to enter one more number?\nIf yes press 1. \nIf no press any other key.");
		scanf("%d",&k);
	}while(k==1);
	
	printf("The number of positive numbers entered :%d",p);
	printf("\nThe number of negative numbers entered :%d",n);
	printf("\nThe number of zeroes entered :%d",z);

	return 0;
}
