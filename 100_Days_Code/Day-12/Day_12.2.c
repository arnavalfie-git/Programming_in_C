/*Q24 (Conditional Statements)
Write a program to calculate electricity bill based on units consumed with these rates: 
First 100 units at ?5/unit 
Next 100 units at ?7/unit 
Next 100 units at ?10/unit 
Above at ?12/unit
*/

#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int n,x;
	printf("Enter units consumed: ");
	scanf("%d",&n);
	
	if(n>300){
		x = n - 300;
		n = 100*5 + 100*7 + 100*10 + x*12;
		printf("Electricity bill = ?%d",n);
	}
	else if(n>200){
		x = n - 200;
		n = 100*5 + 100*7 + x*10;
		printf("Electricity bill = ?%d",n);
	}
	else if(n>100){
		x = n - 100;
		n = 100*5 + x*7;
		printf("Electricity bill = ?%d",n);
	}
	else{
		printf("Electricity bill = ?%d",n*5);
	}
	
	return 0;
}
