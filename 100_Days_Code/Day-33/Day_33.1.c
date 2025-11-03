/* 
Q65: Search in a sorted array using binary search.
*/

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, x, l, h, m, a[100];
    
    printf("Enter size: ");
    scanf("%d", &n);
    
    printf("Enter sorted elements: ");
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    
    printf("Enter element to search: ");
    scanf("%d", &x);
    
    l = 0;
    h = n - 1;
    while(l <= h) {
        m = (l + h) / 2;
        if(a[m] == x) {
            printf("Found at index %d", m);
            return 0;
        } else if(a[m] < x) l = m + 1;
        else h = m - 1;
    }
    
    printf("-1");
    return 0;
}
