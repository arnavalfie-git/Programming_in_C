/*Q31: Write a program to take a number as input and print its equivalent binary representation.*/

#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	int n,r,b=0,p=1;
	
	printf("Enter a number :");
	scanf("%d", &n);
	
	while(n>0){
		
		r = n % 2;
		b = b + (r*p);
		p = p*10;
		n = n/2;		
	}

	printf("Binary equivalent: %d",b);
	
	return 0;
}
