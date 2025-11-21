// Q86: Check if a string is a palindrome.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[100];
    int i=0, j=0, f=1;
    scanf("%s", s);

    while(s[j]) j++;
    j--;

    while(i < j) {
        if(s[i] != s[j]) {
            f = 0;
            break;
        }
        i++;
        j--;
    }

    if(f) printf("Palindrome");
    else printf("Not palindrome");

    return 0;
}
