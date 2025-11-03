/* Q46: Write a program to print the following pattern:
 *****
 *****
 *****
 *****
 ***** */

#include<stdio.h>

int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int i, j;
	
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= 5; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}


