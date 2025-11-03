/* 
Q73: Find the sum of each row of a matrix and store it in an array.
*/

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int r, c, i, j, a[10][10], s[10];
    
    printf("Enter rows and columns: ");
    scanf("%d %d", &r, &c);
    
    printf("Enter elements:\n");
    for(i = 0; i < r; i++) {
        for(j = 0; j < c; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    for(i = 0; i < r; i++) {
        s[i] = 0;
        for(j = 0; j < c; j++) {
            s[i] += a[i][j];
        }
    }

    printf("Sum of each row: ");
    for(i = 0; i < r; i++) {
        printf("%d ", s[i]);
    }

    return 0;
}
