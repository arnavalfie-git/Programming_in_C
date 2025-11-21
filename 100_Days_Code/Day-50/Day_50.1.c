// Q99: Change the date format from dd/04/yyyy to dd-Apr-yyyy.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char d[3], m[3], y[5];
    scanf("%2s/%2s/%4s", d, m, y);

    printf("%s-Apr-%s", d, y);
    return 0;
}
