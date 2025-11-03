/* Q81: Count characters in a string without using built-in length functions. */

#include <stdio.h>
int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[100];
    int i, count=0;
    fgets(s, sizeof(s), stdin);
    for(i=0; s[i]!='\0'; i++)
        count++;
    printf("%d", count-1);
    return 0;
}
