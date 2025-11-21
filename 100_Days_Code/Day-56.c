// Q106: Next greater element using brute force.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n;
    scanf("%d", &n);
    int a[n], i, j, f;

    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        f = -1;
        for(j = i + 1; j < n; j++) {
            if(a[j] > a[i]) {
                f = a[j];
                break;
            }
        }
        printf("%d", f);
        if(i != n - 1) printf(", ");
    }

    return 0;
}
