// Q43: Write a program to check if a number is a strong number.

#include<stdio.h>

int main(){
	printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
	printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

	int n, t, r, i, f, s = 0;
	printf("Enter a number: ");
	scanf("%d", &n);
	t = n;

	while(t > 0){
		r = t % 10;
		f = 1;
		for(i = 1; i <= r; i++){
			f *= i;
		}
		s += f;
		t /= 10;
	}

	if(s == n)
		printf("%d is a strong number.", n);
	else
		printf("%d is not a strong number.", n);

	return 0;
}
