/* Q136: Use enum to represent menu choices (ADD, SUBTRACT, MULTIPLY) and perform operations using switch. */

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    enum menu {ADD = 1, SUBTRACT, MULTIPLY};

    int choice, a, b;
    scanf("%d %d %d", &choice, &a, &b);

    switch(choice) {
        case ADD:
            printf("%d\n", a + b);
            break;
        case SUBTRACT:
            printf("%d\n", a - b);
            break;
        case MULTIPLY:
            printf("%d\n", a * b);
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}
