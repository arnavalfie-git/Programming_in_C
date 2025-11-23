// Q132: Define an enum for traffic lights and print Stop/Wait/Go based on value

#include <stdio.h>
#include <string.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    enum Light { RED, YELLOW, GREEN };
    char s[20];
    scanf("%s", s);

    enum Light L;

    if (strcmp(s, "RED") == 0) L = RED;
    else if (strcmp(s, "YELLOW") == 0) L = YELLOW;
    else L = GREEN;

    if (L == RED) printf("Stop");
    else if (L == YELLOW) printf("Wait");
    else printf("Go");

    return 0;
}
