/*Q22 (Conditional Statements)
Write a program to find profit or loss percentage given cost price and selling price.*/

#include <stdio.h>

int main(){
	
	float c,s,p;
	
	printf("Enter the cost prize of the product :");
	scanf("%f",&c);
	
	printf("\nEnter the selling prize of the product :");
	scanf("%f",&s);
	
	if(c>s){
		p = ((c - s)*100)/c;
		printf("The loss percentage is %f",p);
	}
	
	else if(s>c){
		p = ((s - c)*100)/c;
		printf("The profit percentage is %f",p);
	}
	
	else{
		printf("There is no profit or loss.");
	}
	
	return 0;
}
