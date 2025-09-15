/* 3. Write a C program to add two numbers and take a number from the user.*/
#include <stdio.h>
int main(){
	
	float a;
	float b;
	float c;
	
	printf("This program will give the sum of the two numbers you enter.");
	printf("Enter the first number:-");
	scanf("%f",&a);
	printf("Enter the second number:-");
	scanf("%f",&b);
	
	c = a+b;
	
	printf("The sum of both entered numbers is %f",c);
	
	return 0;
}
