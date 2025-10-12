/*Q23: Write a program to calculate library fine based on late days as follows: 
First 5 days late: ?2/day 
Next 5 days late: ?4/day 
Next 20 days days late: ?6/day 
More than 30 days: Membership Cancelled.
*/

#include<stdio.h>
int main(){
	
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int n,x;
	
	printf("Enter the number of days late :");
	scanf("%d",&n);
	
	if(n>30){
		printf("Membership cancelled.");
	}
	
	else if(n>10){
		x = n - 10;
		n = 30 + (x*6);
		printf("\nThe late fee is : %d",n);				
	}
	
	else if(n>5){
		x = n - 5;
		n = 10 + (x*4);
		printf("\nThe late fee is : %d",n);	
	}
	
	else{
		printf("\nThe late fee is : %d",n*2);
	}

	return 0;
}
