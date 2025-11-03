// Q41: Write a program to swap the first and last digit of a number.

#include<stdio.h>

int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	int n, temp, f, l, p = 1;
	printf("Enter a number: ");
	scanf("%d",&n);

	temp = n;
	l = n % 10;

	while(temp >= 10){
		temp /= 10;
		p *= 10;
	}
	f = temp;

	n = n % p;
	n = n / 10;
	n = l * p + n * 10 + f;

	printf("After swapping: %d", n);
	return 0;
}
