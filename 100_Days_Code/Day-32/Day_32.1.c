/* 
Q63: Merge two arrays.
*/

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n1, n2, i;
    printf("Enter size of first array: ");
    scanf("%d", &n1);

    int a[n1];
    printf("Enter %d elements:\n", n1);
    for(i = 0; i < n1; i++)
        scanf("%d", &a[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);

    int b[n2];
    printf("Enter %d elements:\n", n2);
    for(i = 0; i < n2; i++)
        scanf("%d", &b[i]);

    int m = n1 + n2;
    int c[m];

    for(i = 0; i < n1; i++)
        c[i] = a[i];
    for(i = 0; i < n2; i++)
        c[n1 + i] = b[i];

    printf("Merged array:\n");
    for(i = 0; i < m; i++)
        printf("%d ", c[i]);

    return 0;
}

