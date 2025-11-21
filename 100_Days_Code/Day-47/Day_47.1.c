// Q93: Check if two strings are anagrams of each other.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char a[200], b[200];
    int f1[26]={0}, f2[26]={0}, i=0;

    scanf("%s", a);
    scanf("%s", b);

    while(a[i]) {
        f1[a[i]-'a']++;
        i++;
    }

    i = 0;
    while(b[i]) {
        f2[b[i]-'a']++;
        i++;
    }

    for(i=0;i<26;i++) {
        if(f1[i] != f2[i]) {
            printf("Not anagrams");
            return 0;
        }
    }

    printf("Anagrams");
    return 0;
}
