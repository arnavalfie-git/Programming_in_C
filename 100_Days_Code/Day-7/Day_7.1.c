/*Q13 (Conditional Statements)
Write a program to input a year and check whether it is a leap year or not using conditional statements.

Year is a leap year if divisible by 4 but not 100, except if divisible by 400.*/

#include <stdio.h>

int main(){
	
	int n;
	
	printf("Please enter the year you want to check is whether leap or not :");
	scanf("%d",&n);
	
	if(n%4 == 0 && n%100 != 0){
		printf("It is a leap year.");
	}
	else if(n%400 == 0){
		printf("It is a leap year.");
	}
	else{
		printf("It is not a leap year.");
	}
	
	return 0;
}
