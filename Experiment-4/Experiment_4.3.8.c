/* 4.3.8 */

#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int i,j,n=5;
	
	for(i=1;i<=n;i++){
		
		for(j=i;j<n;j++){
			printf(" ");
		}
		
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		
		for(j=i-1;j>=1;j--){
			printf("%d",j);
		}
		
		printf("\n");
	}
	
	for(i=n-1;i>=1;i--){
		
		for(j=n;j>i;j--){
			printf(" ");
		}
		
		for(j=1;j<=i;j++){
			printf("%d",j);
		}
		
		for(j=i-1;j>=1;j--){
			printf("%d",j);
		}
		
		printf("\n");
	}
	
	return 0;
}
