/* Q48: Write a program to print the following pattern:
1
12
123
1234
12345 */

#include<stdio.h>

int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int i, j;
	
	for(i = 1; i <= 5; i++){
		for(j = 1; j <= i; j++){
			printf("%d", j);
		}
		printf("\n");
	}
	
	return 0;
}
