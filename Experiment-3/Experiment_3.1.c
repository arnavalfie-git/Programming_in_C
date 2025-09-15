/*Experiment 3: Conditional Statements

3.1.Write a C program to check whether a number is Even or ODD*/

#include <stdio.h>

int main(){
	
	int a;
	printf("Enter the number you wish to check whether it is odd or even.");
	scanf("%d",&a);
	
	if(a%2 == 0){
		printf("The entered number is even.");
	}
	else{
		printf("The entered number is odd.");
	}
	return 0;
}
