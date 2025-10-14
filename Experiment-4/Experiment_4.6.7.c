/* 4.3.7 */

#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int i,j,n,k=1;
	
	for(i=1;i<6;i++){
		
		k = 1;
		
		for(n=0;n<i;n++){
			
			printf(" ");
			
		}
		
		for(j=5;j>=i;j--){
			
			printf("%d",k);
			k++;
			
		}
		printf("\n");
	}


	return 0;
}
