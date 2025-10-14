/* 4.3.11 */

#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int i,j,n=5,k;
	
	for(i=n;i>=1;i--){
		
		for(j=i;j<=n;j++){
			printf("%d",j);
		}
		
		printf("\n");
	}
	
	return 0;
}
