/*Q26 (Loops without Arrays/Strings)
Write a program to print numbers from 1 to n.
*/

#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int n,i;
	printf("Enter n: ");
	scanf("%d",&n);
	
	for(i=1;i<=n;i++)
		printf("%d ",i);
	
	return 0;
}
