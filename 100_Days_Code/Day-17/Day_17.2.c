// Q34: Write a program to check if a number is prime.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, f = 0;
    printf("Enter a number: ");
    scanf("%d", &n);

    if(n <= 1)
        printf("Not Prime");
    else {
        for(i = 2; i <= n / 2; i++) {
            if(n % i == 0) {
                f = 1;
                break;
            }
        }
        if(f == 0)
            printf("Prime Number");
        else
            printf("Not Prime");
    }

    return 0;
}
