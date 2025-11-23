/* Q137: Create an enum for user roles (ADMIN, USER, GUEST) and display messages based on role. */

#include <stdio.h>
#include <string.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    enum role {ADMIN, USER, GUEST};

    char s[20];
    scanf("%s", s);

    if(strcmp(s, "ADMIN") == 0)
        printf("Welcome Admin!\n");
    else if(strcmp(s, "USER") == 0)
        printf("Welcome User!\n");
    else if(strcmp(s, "GUEST") == 0)
        printf("Welcome Guest!\n");
    else
        printf("Invalid role\n");

    return 0;
}
