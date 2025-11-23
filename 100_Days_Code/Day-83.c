/* Q133: Create an enum for months and print how many days each month has. */

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    enum month {JAN, FEB, MAR, APR, MAY, JUN, JUL, AUG, SEP, OCT, NOV, DEC};
    enum month m;
    char s[10];
    scanf("%s", s);

    if(!strcmp(s,"JAN")) m = JAN;
    else if(!strcmp(s,"FEB")) m = FEB;
    else if(!strcmp(s,"MAR")) m = MAR;
    else if(!strcmp(s,"APR")) m = APR;
    else if(!strcmp(s,"MAY")) m = MAY;
    else if(!strcmp(s,"JUN")) m = JUN;
    else if(!strcmp(s,"JUL")) m = JUL;
    else if(!strcmp(s,"AUG")) m = AUG;
    else if(!strcmp(s,"SEP")) m = SEP;
    else if(!strcmp(s,"OCT")) m = OCT;
    else if(!strcmp(s,"NOV")) m = NOV;
    else m = DEC;

    switch(m) {
        case JAN: case MAR: case MAY: case JUL: case AUG: case OCT: case NOV:
            printf("31 days");
            break;
        case APR: case JUN: case SEP:
            printf("30 days");
            break;
        case FEB:
            printf("28 or 29 days");
            break;
        default:
            break;
    }
}
