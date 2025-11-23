// Q127: Read from input.txt, convert lowercase to uppercase, write to output.txt

#include <stdio.h>
#include <ctype.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    FILE *in, *out;
    in = fopen("input.txt", "r");
    if (in == NULL) {
        printf("Error: input.txt not found!");
        return 0;
    }

    out = fopen("output.txt", "w");

    char ch;
    while ((ch = fgetc(in)) != EOF) {
        if (ch >= 'a' && ch <= 'z') ch = ch - 32;
        fputc(ch, out);
    }

    fclose(in);
    fclose(out);

    printf("Converted text written to output.txt");

    return 0;
}
