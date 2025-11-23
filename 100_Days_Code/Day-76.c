// Q126: Check if file exists. If yes, display content. If no, show error.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char fname[100];
    FILE *fp;

    printf("Enter filename: ");
    scanf("%s", fname);

    fp = fopen(fname, "r");
    if (fp == NULL) {
        printf("Error: File does not exist!");
        return 0;
    }

    printf("File opened successfully.\n");

    char ch;
    while ((ch = fgetc(fp)) != EOF) {
        putchar(ch);
    }

    fclose(fp);

    return 0;
}
