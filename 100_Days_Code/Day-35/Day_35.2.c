/* 
Q70: Rotate an array to the right by k positions.
*/

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, k, i, a[100], t[100];
    
    printf("Enter size: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    
    printf("Enter k: ");
    scanf("%d", &k);
    
    k = k % n;
    
    for(i = 0; i < n; i++) {
        t[(i + k) % n] = a[i];
    }
    
    printf("Rotated array: ");
    for(i = 0; i < n; i++) {
        printf("%d ", t[i]);
    }
    
    return 0;
}
