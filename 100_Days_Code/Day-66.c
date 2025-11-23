// Q116: Find two indices i and j such that nums[i] + nums[j] == target.
// Print the indices or "-1 -1" if no solution.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, t, i, j;
    int a[100];

    scanf("%d", &n);
    for (i = 0; i < n; i++) scanf("%d", &a[i]);
    scanf("%d", &t);

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (a[i] + a[j] == t) {
                printf("%d %d", i, j);
                return 0;
            }
        }
    }

    printf("-1 -1");
    return 0;
}
