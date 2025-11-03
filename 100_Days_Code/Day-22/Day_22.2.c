// Q44: Write a program to find the sum of the series: 1 + 3/4 + 5/6 + 7/8 + … up to n terms.

#include<stdio.h>

int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int i, n, a = 1, b = 2;
	float s = 0;
	
	printf("Enter number of terms: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		s += (float)a / b;
		a += 2;
		b += 2;
	}
	
	printf("Sum of series: %.2f", s);
	
	return 0;
}

