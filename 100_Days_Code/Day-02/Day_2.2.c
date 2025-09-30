/*Q4 (User Inputs, Operations & Output)
Write a program to calculate the area and circumference of a circle given its radius.*/

#include <stdio.h>

int main(){
	
	float a,c,r;
	
	printf("Please enter the radius of the circle : ");
	scanf("%f",&r);
	
	// Circumference
	
	c = 6.28*r;
	printf("The circumference of the circle is %f\n",c);
	
	//Area
	
	a = 3.14*r*r;
	printf("The area of the circle is %f",a);
	
	return 0;
}
