/* Q140: Define a struct with enum Gender and print person's gender. */

#include <stdio.h>

enum Gender {MALE, FEMALE, OTHER};

struct Person {
    enum Gender g;
};

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    struct Person p;
    int x;
    scanf("%d", &x);
    p.g = x;

    if (p.g == MALE) printf("Male");
    else if (p.g == FEMALE) printf("Female");
    else printf("Other");

    return 0;
}
