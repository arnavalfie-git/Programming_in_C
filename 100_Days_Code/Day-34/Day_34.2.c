/* 
Q68: Delete an element from an array.
*/

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, pos, a[100];
    
    printf("Enter size: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    
    printf("Enter position to delete: ");
    scanf("%d", &pos);
    
    for(i = pos; i < n - 1; i++) {
        a[i] = a[i + 1];
    }
    n--;
    
    printf("Array after deletion: ");
    for(i = 0; i < n; i++) printf("%d ", a[i]);
    
    return 0;
}
