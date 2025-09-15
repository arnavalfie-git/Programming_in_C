/*Q2 (User Inputs, Operations & Output)
Write a program to input two numbers and display their sum, difference, product, and quotient.
*/

#include <stdio.h>
int main(){
	
	int n;
	int a;
	int b;
	int c;
	
	printf("Welcome to the program\nPlease enter the serial number of the function you wish to perform:\n");
	printf("1. Addition\n");
	printf("2. Substraction\n");
	printf("3. Multiplication\n");
	printf("4. Division\n");
	
	printf("Please Enter the function you want to perform from (1-4)");
	scanf("%d",&n);
	
	if (n==1){
		
		printf("Enter the first number :");
		scanf("%f",&a);
		
		printf("Enter the second number :");
		scanf("%d",&b);
		
		c = a+b;
		printf("The sum of the entered numbers is : %d",c);
	}
	
	
	else if (n==2){
		
		printf("Enter the first number :");
		scanf("%d",&a);
		
		printf("Enter the second number :");
		scanf("%d",&b);
		
		c = a-b;
		printf("The difference (First Number - Second number) of the entered numbers is : %d",c);
	}
	
	else if (n==3){
		
		printf("Enter the first number :");
		scanf("%d",&a);
		
		printf("Enter the second number :");
		scanf("%d",&b);
		
		c = a*b;
		printf("The product of the entered numbers is : %d",c);
	}
	
	else if (n==4){
		
		printf("Enter the first number :");
		scanf("%d",&a);
		
		printf("Enter the second number :");
		scanf("%d",&b);
		
		c = a/b;
		printf("The division of the first number by the second number is : %d",c);
	}
	
	else{
		printf("Please enter your choice in between(1-4)");
	}
	
	return 0;
}
