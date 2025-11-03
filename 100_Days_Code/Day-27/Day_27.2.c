/* 
Q54 (Nested Loops without Arrays/Strings)
Write a program to print the following pattern:

   *
  ***
 *****
*******
 *****
  ***
   *
*/

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int i, j, k;
    for(i = 1; i <= 4; i++) {
        for(j = 4; j > i; j--) printf(" ");
        for(k = 1; k <= 2*i-1; k++) printf("*");
        printf("\n");
    }
    for(i = 3; i >= 1; i--) {
        for(j = 4; j > i; j--) printf(" ");
        for(k = 1; k <= 2*i-1; k++) printf("*");
        printf("\n");
    }
    return 0;
}
