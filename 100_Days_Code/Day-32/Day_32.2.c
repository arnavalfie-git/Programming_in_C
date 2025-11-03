/* 
Q64: Find the digit that occurs the most times in an integer number.
*/

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, d, f[10] = {0}, i, max = 0, r;

    printf("Enter a number: ");
    scanf("%d", &n);

    while(n > 0) {
        d = n % 10;
        f[d]++;
        n /= 10;
    }

    for(i = 0; i < 10; i++) {
        if(f[i] > max) {
            max = f[i];
            r = i;
        }
    }

    printf("%d", r);

    return 0;
}
