/* Q3 (User Inputs, Operations & Output)
Write a program to calculate the area and perimeter of a rectangle given its length and breadth.*/

#include <stdio.h>
int main(){
	
	float l;
	float b;
	float a;
	float p;
	
	printf("This program collects the length and width of a rectangle from the user and calculates the perimeter and the area of the given rectangle.");
	
	printf("\nPlease enter the length of the rectangle :-");
	scanf("%f",&l);
	
	printf("Please enter the length of the rectangle :-");
	scanf("%f",&b);
	
	a = l*b;
	p = 2*(l+b);
	
	printf("The perimeter of the rectangle is : %f", p);
	printf("The area of the given rectangle is : %f", a);
	
	return 0;	
}
