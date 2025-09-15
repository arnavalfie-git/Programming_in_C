/*3. Write a program to calculate Compound Interest.*/
#include <stdio.h>
#include <math.h>
int main(){
	
	float p;
	float r;
	float n;
	float t;
	float a1;
	float a2;
	float a3;
	float a;
	
	
	printf("This program calculates the compound interest when provided principal amount, rate of interest, the number of time interest is compounded annually and the duration for which the amount is taken.");
	
	printf("Enter the principal amount :");
	scanf("%f",&p);
	
	printf("Enter the rate of interest :");
	scanf("%f",&r);
	
	printf("Enter the times amount is compounded annually :");
	scanf("%f",&n);
	
	printf("Enter the time for which amount is taken for :");
	scanf("%f",&t);
	
	a1 = (r/n)+ 1;
	a2 =  n*t;
	a3 = pow(a1,a2);
	a = p*a3;
	
	printf("The final amount is : %f", a);	
	
	return 0;
	
}
	
	
	
