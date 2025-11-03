/* 
Q67: Insert an element in an array at a given position.
*/

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, pos, x, a[100];
    
    printf("Enter size: ");
    scanf("%d", &n);
    
    printf("Enter elements: ");
    for(i = 0; i < n; i++) scanf("%d", &a[i]);
    
    printf("Enter position and element: ");
    scanf("%d %d", &pos, &x);
    
    for(i = n; i > pos; i--) {
        a[i] = a[i - 1];
    }
    
    a[pos] = x;
    n++;
    
    printf("Array after insertion: ");
    for(i = 0; i < n; i++) printf("%d ", a[i]);
    
    return 0;
}
