/* Q141: Define a structure Student with name, roll_no, and marks, then read and print one student's data. */

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    struct Student s;
    scanf("%s", s.name);
    scanf("%d", &s.roll);
    scanf("%d", &s.marks);

    printf("Name: %s | Roll: %d | Marks: %d", s.name, s.roll, s.marks);

    return 0;
}

