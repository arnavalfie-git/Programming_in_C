// Q79: Perform diagonal traversal of a matrix.

#include <stdio.h>
int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int a[r][c];
    for(i=0;i<r;i++)
        for(j=0;j<c;j++)
            scanf("%d", &a[i][j]);

    for(int k=0;k<r+c-1;k++){
        for(i=0;i<=k;i++){
            j=k-i;
            if(i<r && j<c)
                printf("%d ", a[i][j]);
        }
    }
    return 0;
}
