/*Q30: Write a program to reverse a given number.*/

#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int n,r=0,d;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	while(n>0){
		d = n % 10;
		r = r * 10 + d;
		n /= 10;
	}
	
	printf("Reversed number = %d",r);
	return 0;
}
