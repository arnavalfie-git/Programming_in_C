/*Q25: Write a program to implement a basic calculator using switch-case for +, -, *, /, %.*/

#include<stdio.h>
int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int a,b,r;
	char o;
	printf("Enter two numbers and an operator (+,-,*,/,%%): ");
	scanf("%d %d %c",&a,&b,&o);
	
	switch(o){
		case '+': r = a + b; break;
		case '-': r = a - b; break;
		case '*': r = a * b; break;
		case '/': r = a / b; break;
		case '%': r = a % b; break;
		default: printf("Invalid operator"); return 0;
	}
	
	printf("Result = %d",r);
	return 0;
}
