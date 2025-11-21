// Q95: Check if one string is a rotation of another.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char a[200], b[200], c[400];
    int i=0, j=0, k=0, la=0, lb=0;

    scanf("%s", a);
    scanf("%s", b);

    while(a[la]) la++;
    while(b[lb]) lb++;

    if(la != lb) {
        printf("Not rotation");
        return 0;
    }

    while(a[i]) {
        c[i] = a[i];
        i++;
    }
    j = 0;
    while(a[j]) {
        c[i] = a[j];
        i++;
        j++;
    }
    c[i] = '\0';

    i = 0;
    j = 0;
    while(c[i]) {
        if(c[i] == b[j]) {
            k = i;
            while(c[k] && b[j] && c[k] == b[j]) {
                k++;
                j++;
            }
            if(j == lb) {
                printf("Rotation");
                return 0;
            }
            j = 0;
        }
        i++;
    }

    printf("Not rotation");
    return 0;
}
