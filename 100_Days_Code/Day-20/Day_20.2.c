// Q40: Write a program to find the 1’s complement of a binary number and print it.

#include<stdio.h>

int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	long n;
	printf("Enter a binary number: ");
	scanf("%ld",&n);

	long r=0, p=1, d;
	while(n>0){
		d = n % 10;
		if(d==0)
			r += 1*p;
		p *= 10;
		n /= 10;
	}

	printf("1's Complement = %ld", r);
	return 0;
}
