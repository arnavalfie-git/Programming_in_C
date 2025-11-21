// Q90: Toggle case of each character in a string.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[200];
    int i=0;
    scanf("%s", s);

    while(s[i]) {
        if(s[i] >= 'a' && s[i] <= 'z') s[i] = s[i] - 32;
        else if(s[i] >= 'A' && s[i] <= 'Z') s[i] = s[i] + 32;
        i++;
    }

    printf("%s", s);
    return 0;
}
