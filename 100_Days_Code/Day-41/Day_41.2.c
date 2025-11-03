/* Q82: Print each character of a string on a new line. */

#include <stdio.h>
int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[100];
    int i;
    fgets(s, sizeof(s), stdin);
    for(i=0; s[i]!='\0'; i++) {
        if(s[i] != '\n')
            printf("%c\n", s[i]);
    }
    return 0;
}
