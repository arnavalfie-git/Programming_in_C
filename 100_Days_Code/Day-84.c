/* Q134: Define an enum with SUCCESS, FAILURE, and TIMEOUT, and print messages accordingly. */

#include <stdio.h>
#include <string.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    enum status {SUCCESS, FAILURE, TIMEOUT};
    enum status s;
    char x[20];
    scanf("%s", x);

    if(!strcmp(x,"SUCCESS")) s = SUCCESS;
    else if(!strcmp(x,"FAILURE")) s = FAILURE;
    else s = TIMEOUT;

    switch(s) {
        case SUCCESS:
            printf("Operation successful");
            break;
        case FAILURE:
            printf("Operation failed");
            break;
        case TIMEOUT:
            printf("Operation timed out");
            break;
    }
}
