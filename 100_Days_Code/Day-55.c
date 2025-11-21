// Q105: Write a program to print the majority element in the array.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n;
    scanf("%d", &n);
    int a[n], i, c = 0, m = 0;

    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    for(i = 0; i < n; i++) {
        if(c == 0) { m = a[i]; c = 1; }
        else if(a[i] == m) c++;
        else c--;
    }

    c = 0;
    for(i = 0; i < n; i++) if(a[i] == m) c++;

    if(c > n/2) printf("%d", m);
    else printf("-1");

    return 0;
}
