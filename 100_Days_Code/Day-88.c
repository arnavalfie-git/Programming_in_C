/* Q138: Print all enum names and integer values using a loop. */

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    enum colors {RED, YELLOW, GREEN};
    char *names[] = {"RED", "YELLOW", "GREEN"};

    for(int i = 0; i < 3; i++)
        printf("%s=%d\n", names[i], i);

    return 0;
}
