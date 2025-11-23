// Q120: Convert string to sentence case (capitalize each word).

#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[300];
    int i = 0;

    fgets(s, sizeof(s), stdin);

    if (s[0] >= 'a' && s[0] <= 'z') s[0] -= 32;

    while (s[i] != '\0') {
        if (s[i] == ' ' && s[i+1] >= 'a' && s[i+1] <= 'z') {
            s[i+1] -= 32;
        }
        i++;
    }

    printf("%s", s);

    return 0;
}
