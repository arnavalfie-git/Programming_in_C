/*Q27 (Loops without Arrays/Strings)
Write a program to print the sum of the first n odd numbers.
*/

#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int n,i,sum=0;
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		sum += 2*i - 1;
		
	printf("Sum of first %d odd numbers = %d",n,sum);
	return 0;
}
