// Q88: Replace spaces with hyphens in a string.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[200];
    int i=0;
    fgets(s, 200, stdin);

    while(s[i]) {
        if(s[i] == ' ') s[i] = '-';
        i++;
    }

    printf("%s", s);
    return 0;
}
