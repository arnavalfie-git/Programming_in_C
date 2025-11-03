// Q36: Write a program to find the HCF (GCD) of two numbers.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int a, b, i, h;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    for(i = 1; i <= a && i <= b; i++) {
        if(a % i == 0 && b % i == 0)
            h = i;
    }

    printf("HCF = %d", h);
    return 0;
}
