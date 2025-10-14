/* 4.3.3 */

#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	int i,j,n=1;
	
	for(i=1;i<6;i++){
		
		for(j=1;j<=i;j++){
			printf(" %d",n);
			n++;
		}
	printf("\n");
	}

	return 0;
}
