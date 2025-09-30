/*Q8 (User Inputs, Operations & Output)
Write a program to find and display the sum of the first n natural numbers.*/

#include <stdio.h>

int main(){
	
	int n,s;
	
	printf("Enter the number upto which you want the sum of natural numbers : ");
	scanf("%d",&n);
	
	s = (n*(n+1))/2;
	
	printf("The sum of the numbers is %d",s);
	
	return 0;
}
