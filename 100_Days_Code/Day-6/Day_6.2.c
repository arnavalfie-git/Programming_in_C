/*Q12 (Conditional Statements)
Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.*/

#include <stdio.h>

int main(){
	
	int n;
	
	printf("Please enter an integer value to check whether it is positive, negative or zero :");
	scanf("%d",&n);
	
	if(n>=0){
		
		if(n>0){
			printf("The entered integer is positive.");
		}
		else{
			printf("The entered number is zero.");
		}
	}
	else{
		printf("It is a negative number.");
	}
	
	return 0;
}
