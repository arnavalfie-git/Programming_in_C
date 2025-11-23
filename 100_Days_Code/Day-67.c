// Q117: Merge two sorted arrays into a single sorted array.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int m, n, i = 0, j = 0, k = 0;
    int a[100], b[100], c[200];

    scanf("%d", &m);
    for (i = 0; i < m; i++) scanf("%d", &a[i]);

    scanf("%d", &n);
    for (j = 0; j < n; j++) scanf("%d", &b[j]);

    i = 0;
    j = 0;

    while (i < m && j < n) {
        if (a[i] < b[j]) c[k++] = a[i++];
        else c[k++] = b[j++];
    }

    while (i < m) c[k++] = a[i++];
    while (j < n) c[k++] = b[j++];

    for (i = 0; i < k; i++) printf("%d ", c[i]);

    return 0;
}
