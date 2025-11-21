// Q104: Find pivot integer x such that sum(1..x) = sum(x..n)

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, x, sum = 0, left, right;
    scanf("%d", &n);

    sum = n * (n + 1) / 2;

    for(x=1; x<=n; x++) {
        left = x * (x + 1) / 2;
        right = sum - (x - 1) * x / 2;

        if(left == right) {
            printf("%d", x);
            return 0;
        }
    }

    printf("-1");
    return 0;
}
