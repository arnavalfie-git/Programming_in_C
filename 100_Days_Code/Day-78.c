// Q128: Count vowels and consonants in a text file

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    FILE *fp;
    fp = fopen("text.txt", "r");
    if (fp == NULL) {
        printf("Error: text.txt not found!");
        return 0;
    }

    char ch;
    int v = 0, c = 0;

    while ((ch = fgetc(fp)) != EOF) {
        if (ch >= 'A' && ch <= 'Z') ch = ch + 32;

        if (ch >= 'a' && ch <= 'z') {
            if (ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u') v++;
            else c++;
        }
    }

    fclose(fp);

    printf("Vowels: %d\nConsonants: %d", v, c);

    return 0;
}
