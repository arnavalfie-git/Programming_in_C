/*Q29 (Loops without Arrays/Strings)
Write a program to calculate the factorial of a number.
*/

#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int n,i,f=1;
	printf("Enter a number: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		f *= i;
		
	printf("Factorial of %d = %d",n,f);
	return 0;
}
