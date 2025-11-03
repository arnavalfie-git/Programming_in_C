// Q76: Check if a matrix is symmetric.

#include <stdio.h>
int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, j, f = 1;
    scanf("%d", &n);
    int a[n][n];
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(a[i][j]!=a[j][i])
                f=0;
    if(f) printf("True");
    else printf("False");
    return 0;
}
