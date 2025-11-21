// Q100: Print all sub-strings of a string.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[200];
    int i=0, j=0, k=0;
    scanf("%s", s);

    while(s[i]) i++;

    for(j=0;j<i;j++) {
        for(k=j;k<i;k++) {
            int x=j;
            while(x<=k) {
                printf("%c", s[x]);
                x++;
            }
            if(!(j==i-1 && k==i-1)) printf(",");
        }
    }

    return 0;
}
