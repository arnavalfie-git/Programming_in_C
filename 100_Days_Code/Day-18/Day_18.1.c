// Q35: Write a program to print all factors of a given number.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i;
    printf("Enter a number: ");
    scanf("%d", &n);

    printf("Factors: ");
    for(i = 1; i <= n; i++) {
        if(n % i == 0)
            printf("%d ", i);
    }

    return 0;
}
