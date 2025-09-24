/*Q19 (Conditional Statements)
Write a program to classify a triangle as Equilateral, Isosceles, or Scalene based on its side lengths.*/

#include <stdio.h>

int main(){
	
	float a,b,c,h,b1,p;
	
	/*Let us calculate the largest side of the triangle*/
	
	printf("Enter the first side of the triangle : ");
	scanf("%f",&a);
	
	printf("Enter the second side of the triangle : ");
	scanf("%f",&b);
	
	printf("Enter the third side of the triangle : ");
	scanf("%f",&c);
	
	
	if ((a>b) && (a>c)){
		h = a;
		b1 = b;
		p = c;
		
	}
	
	else if ((b>a) && (b>c)){
		h = b;
		b1 = a;
		p = c;
	}
	
	else{
		h = c;
		b1 = a;
		p = b;
	}
	
	//For checvking if it is a valid triangle or not
	
	if ((h<b1+p) || (b1<h+p) || (p<h+b1)) {
		printf("It is a valid triangle.");
		
		// For checking if the triangle is scalene, isosceles or equilateral
		
		if((a==b)&&(a==c)){
			printf("The triangle is equilateral.");
		}
		
		else if((a==b)||(a==c)){
			printf("The triangle is isosceles.");
		}
		else{
			printf("The triangle is scalene.");
		}
		
		
		}
	
	else{
		printf("It is not a valid triangle.\n");
	}
	
	return 0;
}
