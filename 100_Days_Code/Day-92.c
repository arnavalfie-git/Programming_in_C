/* Q142: Store details of 5 students in an array of structures and print all. */

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    struct Student s[5];
    int i;

    for(i=0;i<5;i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%d", &s[i].marks);
    }

    for(i=0;i<5;i++) {
        printf("Name: %s | Roll: %d | Marks: %d\n", s[i].name, s[i].roll, s[i].marks);
    }

    return 0;
}
