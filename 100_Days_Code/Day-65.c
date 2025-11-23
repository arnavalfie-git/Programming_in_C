// Q115: Write a program to take two strings s and t as inputs (assume all characters are lowercase).
// The task is to determine if s and t are valid anagrams. Print "Anagram" or "Not Anagram".

#include <stdio.h>
#include <string.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[100], t[100];
    int a[26] = {0}, b[26] = {0};
    int i;

    scanf("%s", s);
    scanf("%s", t);

    if (strlen(s) != strlen(t)) {
        printf("Not Anagram");
        return 0;
    }

    for (i = 0; s[i]; i++) a[s[i] - 'a']++;
    for (i = 0; t[i]; i++) b[t[i] - 'a']++;

    for (i = 0; i < 26; i++) {
        if (a[i] != b[i]) {
            printf("Not Anagram");
            return 0;
        }
    }

    printf("Anagram");
    return 0;
}
