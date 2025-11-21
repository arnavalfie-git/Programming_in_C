// Q87: Count spaces, digits, and special characters in a string.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[200];
    int sp=0, d=0, sc=0, i=0;
    fgets(s, 200, stdin);

    while(s[i]) {
        if(s[i] == ' ') sp++;
        else if(s[i] >= '0' && s[i] <= '9') d++;
        else if((s[i] >= 'a' && s[i] <= 'z') || (s[i] >= 'A' && s[i] <= 'Z'));
        else if(s[i] != '\n') sc++;
        i++;
    }

    printf("Spaces=%d, Digits=%d, Special=%d", sp, d, sc);
    return 0;
}
