// Q124: Copy content from source file to destination file using fgetc() and fputc()

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    FILE *src, *dest;
    char sname[100], dname[100];
    char ch;

    printf("Enter source filename: ");
    scanf("%s", sname);

    printf("Enter destination filename: ");
    scanf("%s", dname);

    src = fopen(sname, "r");
    if (src == NULL) {
        printf("Source file not found");
        return 0;
    }

    dest = fopen(dname, "w");
    if (dest == NULL) {
        printf("Could not create destination file");
        fclose(src);
        return 0;
    }

    while ((ch = fgetc(src)) != EOF) {
        fputc(ch, dest);
    }

    fclose(src);
    fclose(dest);

    printf("File copied successfully to %s", dname);

    return 0;
}
