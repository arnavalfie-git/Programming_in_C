// Q45: Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.

#include<stdio.h>

int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
	
	int i, n, a = 2, b = 3;
	float s = 0;
	
	printf("Enter number of terms: ");
	scanf("%d", &n);
	
	for(i = 1; i <= n; i++){
		s += (float)a / b;
		a += 2;
		b += 4;
	}
	
	printf("Approximate sum: %.2f", s);
	
	return 0;
}
