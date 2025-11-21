// Q94: Find the longest word in a sentence.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[300], w[100], lw[100];
    int i=0, j=0, ml=0;

    fgets(s, 300, stdin);

    while(s[i]) {
        if(s[i] != ' ' && s[i] != '\n') {
            w[j] = s[i];
            j++;
        } else {
            w[j] = '\0';
            if(j > ml) {
                ml = j;
                int k=0;
                while(w[k]) {
                    lw[k] = w[k];
                    k++;
                }
                lw[k] = '\0';
            }
            j = 0;
        }
        i++;
    }

    w[j] = '\0';
    if(j > ml) {
        int k=0;
        while(w[k]) {
            lw[k] = w[k];
            k++;
        }
        lw[j] = '\0';
    }

    printf("%s", lw);
    return 0;
}
