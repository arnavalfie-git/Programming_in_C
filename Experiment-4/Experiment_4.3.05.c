/* 4.3.5 */

#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int i,j,n,k=1;
	
	for(i=1;i<6;i++){
		
		for(n=4;n>0;n--){
			
			printf("");
			
		}
		
		for(j=1;j<=i;j++){
			
			printf(" %d",k);
			k++;
			
		}
		printf("\n");
	}


	return 0;
}
