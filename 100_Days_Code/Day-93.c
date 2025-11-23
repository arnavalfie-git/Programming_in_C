/* Q143: Find and print the student with the highest marks. */

#include <stdio.h>

struct Student {
    char name[50];
    int roll;
    int marks;
};

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i, max_i = 0;
    scanf("%d", &n);

    struct Student s[n];

    for(i=0;i<n;i++) {
        scanf("%s", s[i].name);
        scanf("%d", &s[i].roll);
        scanf("%d", &s[i].marks);
    }

    for(i=1;i<n;i++) {
        if(s[i].marks > s[max_i].marks) max_i = i;
    }

    printf("Topper: %s (Marks: %d)", s[max_i].name, s[max_i].marks);

    return 0;
}
