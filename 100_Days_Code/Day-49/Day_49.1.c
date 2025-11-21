// Q97: Print the initials of a name.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[200];
    int i=0, f=1;
    fgets(s, 200, stdin);

    while(s[i]) {
        if(f && s[i] != ' ' && s[i] != '\n') {
            printf("%c.", s[i]);
            f = 0;
        }
        if(s[i] == ' ') f = 1;
        i++;
    }

    return 0;
}
