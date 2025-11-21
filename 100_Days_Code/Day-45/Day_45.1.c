// Q89: Count frequency of a given character in a string.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[200], ch;
    int i=0, c=0;

    scanf("%s", s);
    scanf(" %c", &ch);

    while(s[i]) {
        if(s[i] == ch) c++;
        i++;
    }

    printf("%d", c);
    return 0;
}
