/*Q32: Write a program to check if a number is a palindrome.*/
#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	int n,r,rev=0,t;
	
	printf("Enter the number :");
	scanf("%d", &n);
	
	t = n;
	
	while(t>0){
		
		r = t % 10;
		rev = rev*10 + r;
		t = t/10;
		
	}
	
	if(rev == n){
		
		printf("It is a palindrome.");
		
	}
	
	else{
		
		printf("It is not a palindrome.");
		
	}
	return 0;
}
