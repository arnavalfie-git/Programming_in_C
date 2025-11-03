/* Q53: Write a program to print the following pattern:
*
***
*****
*******
*********
*******
*****
***
* */

#include<stdio.h>

int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int i, j, space;
	
	// Upper part of the pattern
	for(i = 1; i <= 5; i++){
		for(space = 5; space > i; space--){
			printf(" ");
		}
		for(j = 1; j <= (2*i - 1); j++){
			printf("*");
		}
		printf("\n");
	}
	
	// Lower part of the pattern
	for(i = 4; i >= 1; i--){
		for(space = 5; space > i; space--){
			printf(" ");
		}
		for(j = 1; j <= (2*i - 1); j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
