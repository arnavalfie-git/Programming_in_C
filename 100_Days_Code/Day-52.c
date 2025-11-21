// Q102: Find the index of the ceil of x in a sorted array.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, x, i, idx=-1;
    scanf("%d", &n);

    int a[n];
    for(i=0;i<n;i++) scanf("%d", &a[i]);

    scanf("%d", &x);

    for(i=0;i<n;i++) {
        if(a[i] >= x) {
            idx = i;
            break;
        }
    }

    printf("%d", idx);
    return 0;
}
