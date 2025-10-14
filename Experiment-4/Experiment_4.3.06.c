/* 4.3.6 */

#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	int i,j;
	
	for(i=1;i<6;i++){
		
		for(j=5;j>=i;j--){
			
			printf(" %d",j);
			
		}
	printf("\n");
	}

	return 0;
}
