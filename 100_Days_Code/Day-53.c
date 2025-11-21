// Q103: Find the leftmost pivot index of an array.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, left=0, right=0;
    scanf("%d", &n);

    int a[n];
    for(i=0;i<n;i++) scanf("%d", &a[i]);

    for(i=0;i<n;i++) right += a[i];

    for(i=0;i<n;i++) {
        right -= a[i];
        if(left == right) {
            printf("%d", i);
            return 0;
        }
        left += a[i];
    }

    printf("-1");
    return 0;
}
