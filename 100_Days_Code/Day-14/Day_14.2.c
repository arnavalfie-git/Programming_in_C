/*Q28 (Loops without Arrays/Strings)
Write a program to print the product of even numbers from 1 to n.
*/

#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int n,i,prod=1;
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(i=2;i<=n;i+=2)
		prod *= i;
		
	printf("Product of even numbers from 1 to %d = %d",n,prod);
	return 0;
}
