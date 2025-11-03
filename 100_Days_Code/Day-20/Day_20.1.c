// Q39: Write a program to find the product of odd digits of a number.

#include<stdio.h>

int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	int n,d,p=1;
	printf("Enter a number: ");
	scanf("%d",&n);

	while(n>0){
		d = n % 10;
		if(d % 2 != 0)
			p *= d;
		n /= 10;
	}

	printf("Product of odd digits = %d", p);
	return 0;
}
