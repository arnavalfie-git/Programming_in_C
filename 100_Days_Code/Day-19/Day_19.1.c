// Q37: Write a program to find the LCM of two numbers.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int a, b, l;
    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    l = (a > b) ? a : b;

    while(1) {
        if(l % a == 0 && l % b == 0) {
            printf("LCM = %d", l);
            break;
        }
        l++;
    }

    return 0;
}
