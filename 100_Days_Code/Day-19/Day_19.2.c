// Q38: Write a program to find the sum of digits of a number.

#include<stdio.h>

int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	int n, s=0, d;
	printf("Enter a number: ");
	scanf("%d", &n);

	while(n>0){
		d = n % 10;
		s += d;
		n /= 10;
	}

	printf("Sum of digits = %d", s);
	return 0;
}
