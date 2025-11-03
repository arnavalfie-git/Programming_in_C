// Q77: Check if the elements on the diagonal of a matrix are distinct.

#include <stdio.h>
int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, j, f = 1;
    scanf("%d", &n);
    int a[n][n], d[n], k = 0;
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            scanf("%d", &a[i][j]);
    for(i=0;i<n;i++)
        d[k++] = a[i][i];
    for(i=0;i<n;i++)
        for(j=i+1;j<n;j++)
            if(d[i]==d[j])
                f=0;
    if(f) printf("True");
    else printf("False");
    return 0;
}
