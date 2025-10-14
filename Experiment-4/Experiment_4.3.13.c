/* 4.3.13 */

#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int i,j,n=5;
	
	for(i=1;i<=n;i++){
		
		for(j=n;j>=i;j--){
			printf("%d",j);
		}
		
		printf("\n");
	}
	
	return 0;
}
