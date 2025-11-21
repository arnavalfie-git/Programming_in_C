// Q91: Remove all vowels from a string.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[200], r[200];
    int i=0, j=0;
    scanf("%s", s);

    while(s[i]) {
        char ch = s[i];
        if(ch!='a' && ch!='e' && ch!='i' && ch!='o' && ch!='u' &&
           ch!='A' && ch!='E' && ch!='I' && ch!='O' && ch!='U') {
            r[j] = ch;
            j++;
        }
        i++;
    }

    r[j] = '\0';
    printf("%s", r);
    return 0;
}

