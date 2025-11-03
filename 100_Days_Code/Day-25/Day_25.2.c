/* Q50: Write a program to print the following pattern:
*****
 ****
  ***
   **
    * */

#include<stdio.h>

int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int i, j, k;
	
	for(i = 5; i >= 1; i--){
		for(k = 5; k > i; k--){
			printf(" ");
		}
		for(j = 1; j <= i; j++){
			printf("*");
		}
		printf("\n");
	}
	
	return 0;
}
