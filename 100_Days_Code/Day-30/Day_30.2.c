/* 
Q60: Count positive, negative, and zero elements in an array.
*/

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, pos = 0, neg = 0, zero = 0;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    int a[n];
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] > 0)
            pos++;
        else if(a[i] < 0)
            neg++;
        else
            zero++;
    }

    printf("Positive=%d, Negative=%d, Zero=%d", pos, neg, zero);
    return 0;
}
