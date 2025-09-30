/*Q17 (Conditional Statements)
Write a program to find the roots of a quadratic equation and categorize them.*/

#include<stdio.h>
#include<math.h>

int main(){
	
	float a;
	float b;
	float c;
	float d;
	float x1;
	float x2;
	float r1, r2;
	
	
	printf("Welcome to the program.\n");
	printf("This program will give you the roots of any quadratic equation you provide.\n");
	
	printf("Please enter the coefficient of x^2");
	scanf("%f", &a);
	
	printf("Please enter the coefficient of x");
	scanf("%f", &b);
	
	printf("Please enter the value of constant value with no variables");
	scanf("%f", &c);
	
	x1 = pow(b,2);
	
	d = x1 - 4*a*c;
	
	x2 = sqrt(d);
	
	r1 = (b*(-1) + x2)/(2*a); 
	r2 = (b*(-1) - x2)/(2*a); 
	
	
	if (d <0){
		printf("The equation has no real roots.");
	}
	
	else if (d >= 0){
		printf("The equation has real roots and the value of the roots would be : %f",r1);
		printf("%f", r2);		
	}
	
	else {
		printf("Please enter the numbers correctly");
	}
		
	return 0;
}
