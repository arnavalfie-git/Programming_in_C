// Q92: Find the first repeating lowercase alphabet in a string.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[200];
    int f[26]={0}, i=0;
    scanf("%s", s);

    while(s[i]) {
        int x = s[i] - 'a';
        f[x]++;
        if(f[x] == 2) {
            printf("%c", s[i]);
            return 0;
        }
        i++;
    }

    return 0;
}
