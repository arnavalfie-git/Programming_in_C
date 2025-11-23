/* Q114: Write a program to take a string s as input.
Find the length of the longest substring without repeating characters. */

#include<stdio.h>

int main(){
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    char s[1000];
    scanf("%s", s);

    int max = 0, start = 0;
    int last[256];
    for(int i = 0; i < 256; i++) last[i] = -1;

    for(int i = 0; s[i] != '\0'; i++){
        if(last[(unsigned char)s[i]] >= start){
            start = last[(unsigned char)s[i]] + 1;
        }
        last[(unsigned char)s[i]] = i;
        int len = i - start + 1;
        if(len > max) max = len;
    }

    printf("%d", max);

    return 0;
}
