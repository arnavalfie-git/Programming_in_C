/* Q51: Write a program to print the following pattern:
    5
   45
  345
 2345
12345 */

#include<stdio.h>

int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int i, j, k;
	
	for(i = 5; i >= 1; i--){
		for(k = 1; k < i; k++){
			printf(" ");
		}
		for(j = i; j <= 5; j++){
			printf("%d", j);
		}
		printf("\n");
	}
	
	return 0;
}
