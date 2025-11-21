// Q98: Print initials of a name with the surname displayed in full.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[300], last[100];
    int i=0, j=0, f=1;

    fgets(s, 300, stdin);

    int ln = 0;
    while(s[ln]) ln++;

    int end = ln-1;
    while(end >= 0 && (s[end] == '\n' || s[end] == ' ')) end--;

    int start = end;
    while(start >= 0 && s[start] != ' ') start--;
    start++;

    for(i=start;i<=end;i++) last[j++] = s[i];
    last[j] = '\0';

    i = 0;
    f = 1;
    while(i < start) {
        if(f && s[i] != ' ' && s[i] != '\n') {
            printf("%c.", s[i]);
            f = 0;
        }
        if(s[i] == ' ') f = 1;
        i++;
    }

    printf(" %s", last);
    return 0;
}
