// Q42: Write a program to check if a number is a perfect number.

#include<stdio.h>

int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	int n, i, s = 0;
	printf("Enter a number: ");
	scanf("%d", &n);

	for(i = 1; i < n; i++){
		if(n % i == 0){
			s += i;
		}
	}

	if(s == n)
		printf("%d is a perfect number.", n);
	else
		printf("%d is not a perfect number.", n);

	return 0;
}
