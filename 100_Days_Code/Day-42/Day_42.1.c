// Q83: Count vowels and consonants in a string.

#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[100];
    int v=0, c=0, i=0;
    scanf("%s", s);

    while(s[i]) {
        char ch = tolower(s[i]);
        if(ch>='a' && ch<='z') {
            if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') v++;
            else c++;
        }
        i++;
    }

    printf("Vowels=%d, Consonants=%d", v, c);
    return 0;
}
