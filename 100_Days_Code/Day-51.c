// Q101: First and last occurrence of target in a sorted array.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, t, i, first=-1, last=-1;
    scanf("%d", &n);

    int a[n];
    for(i=0;i<n;i++) scanf("%d", &a[i]);

    scanf("%d", &t);

    for(i=0;i<n;i++) {
        if(a[i] == t) {
            if(first == -1) first = i;
            last = i;
        }
    }

    printf("%d,%d", first, last);
    return 0;
}
