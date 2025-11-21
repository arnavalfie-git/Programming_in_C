// Q96: Reverse each word in a sentence without changing the word order.

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[300], w[100];
    int i=0, j=0;

    fgets(s, 300, stdin);

    while(s[i]) {
        if(s[i] != ' ' && s[i] != '\n') {
            w[j] = s[i];
            j++;
        } else {
            int a = 0, b = j-1;
            while(a < b) {
                char t = w[a];
                w[a] = w[b];
                w[b] = t;
                a++;
                b--;
            }
            w[j] = '\0';
            printf("%s", w);
            if(s[i] == ' ') printf(" ");
            j = 0;
        }
        i++;
    }

    return 0;
}
