// Q125: Append a new line of text to an existing file

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    FILE *fp;
    char fname[100];
    char text[200];

    printf("Enter filename: ");
    scanf("%s", fname);

    fp = fopen(fname, "a");
    if (fp == NULL) {
        printf("File not found");
        return 0;
    }

    printf("Enter text to append: ");
    getchar();            
    fgets(text, sizeof(text), stdin);

    fputs(text, fp);

    fclose(fp);

    printf("File updated successfully with appended text.");

    return 0;
}
