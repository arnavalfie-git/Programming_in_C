// Q131: Create an enumeration for days and print each day with its integer value

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    enum Days { SUNDAY, MONDAY, TUESDAY, WEDNESDAY, THURSDAY, FRIDAY, SATURDAY };

    enum Days d;

    for (d = SUNDAY; d <= SATURDAY; d++) {
        if (d == SUNDAY) printf("SUNDAY = %d\n", d);
        if (d == MONDAY) printf("MONDAY = %d\n", d);
        if (d == TUESDAY) printf("TUESDAY = %d\n", d);
        if (d == WEDNESDAY) printf("WEDNESDAY = %d\n", d);
        if (d == THURSDAY) printf("THURSDAY = %d\n", d);
        if (d == FRIDAY) printf("FRIDAY = %d\n", d);
        if (d == SATURDAY) printf("SATURDAY = %d\n", d);
    }

    return 0;
}
