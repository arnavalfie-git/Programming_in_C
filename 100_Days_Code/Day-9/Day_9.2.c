/*Write a program that accepts a percentage (0-100) and assigns a grade based on the following criteria: 
90-100: Grade A 
80-89: Grade B 
70-79: Grade C 
60-69: Grade D 
below 60: Grade F.*/

#include <stdio.h>

int main() {
    int n;

    printf("Enter your percentage: ");
    scanf("%d", &n);

    if (n > 75) {
        printf("Distinction");
    } else if (n >= 60 && n <= 75) {
        printf("First Class");
    } else if (n >= 50 && n < 60) {
        printf("Second Class");
    } else if (n >= 40 && n < 50) {
        printf("Pass");
    } else {
        printf("Fail");
    }

    return 0;
}
