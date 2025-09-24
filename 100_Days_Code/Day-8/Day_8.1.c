/*Write a program to input a character and check whether it is an uppercase alphabet, lowercase alphabet, digit, or special character.*/
#include <stdio.h>

int main() {
    char c;

    printf("Enter a character: ");
    scanf("%c", &c);

    if (c >= 'A' && c <= 'Z') {
        printf("%c is an Uppercase Alphabet.\n", c);
    } 
    else if (c >= 'a' && c <= 'z') {
        printf("%c is a Lowercase Alphabet.\n", c);
    } 
    else if (c >= '0' && c <= '9') {
        printf("%c is a Digit.\n", c);
    } 
    else {
        printf("%c is a Special Character.\n", c);
    }

    return 0;
}
