/* 4.3.10 */

#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int i,j,n=5;
	
	for(i=1;i<=n;i++){
		
		for(j=i;j<n;j++){
			printf(" ");
		}
		
		for(j=n;j>n-i;j--){
			printf("%d",j);
		}
		
		for(j=n-i+2;j<=n;j++){
			printf("%d",j);
		}
		
		printf("\n");
	}
	
	for(i=n-1;i>=1;i--){
		
		for(j=n;j>i;j--){
			printf(" ");
		}
		
		for(j=n;j>n-i;j--){
			printf("%d",j);
		}
		
		for(j=n-i+2;j<=n;j++){
			printf("%d",j);
		}
		
		printf("\n");
	}
	
	return 0;
}
