/*Q11 (Conditional Statements)
Write a program to input an integer and check whether it is even or odd using if–else.*/

#include <stdio.h>

int main(){
	
	int n;
	
	printf("Please enter an integer value to check whether it is even or odd :");
	scanf("%d",&n);
	
	if(n%2==0){
		printf("It is an even number.");
	}
	else{
		printf("It is an odd number.");
	}
	return 0;
}
