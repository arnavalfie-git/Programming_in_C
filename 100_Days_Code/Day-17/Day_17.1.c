// Q33: Write a program to check if a number is an Armstrong number.

#include <stdio.h>
#include <math.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, t, r, s = 0, c = 0;
    printf("Enter a number: ");
    scanf("%d", &n);
    t = n;
    while(t > 0) {
        c++;
        t /= 10;
    }
    t = n;
    while(t > 0) {
        r = t % 10;
        s = s + pow(r, c);
        t = t/10;
    }
    if(s == n)
        printf("Armstrong Number");
    else
        printf("Not Armstrong Number");
    return 0;
}
