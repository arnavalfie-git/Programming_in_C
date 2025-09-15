/*2. ?WAP a C program to Convert temperature from Celsius to Fahrenheit using the formula: F = (C * 9/5) + 32.*/
#include <stdio.h>
int main(){
	
	float c;
	float fh;

	printf("This program converts the entered temperature from celcius form to fahrenheit.");
	
	printf("\nPlease enter the value in celcius :");
	scanf("%f",&c);
	
	fh = (1.8*c) + 32;
	
	printf("The temperature in fahrenheit is : %f", fh);
	
	return 0;	
}
