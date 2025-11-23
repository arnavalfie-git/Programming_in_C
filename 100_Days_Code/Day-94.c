/* Q144: Write a function that accepts a structure as parameter and prints its members. */

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

void print(struct Student s) {
    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll, s.marks);
}

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    struct Student s;
    scanf("%s", s.name);
    scanf("%d", &s.roll);
    scanf("%d", &s.marks);

    print(s);

    return 0;
}
