/* 
Q55 (Nested Loops without Arrays/Strings)
Write a program to print all the prime numbers from 1 to n.
*/

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, j, flag;
    printf("Enter n: ");
    scanf("%d", &n);

    printf("Prime numbers from 1 to %d are:\n", n);
    for(i = 2; i <= n; i++) {
        flag = 0;
        for(j = 2; j <= i/2; j++) {
            if(i % j == 0) {
                flag = 1;
                break;
            }
        }
        if(flag == 0)
            printf("%d ", i);
    }
    return 0;
}
