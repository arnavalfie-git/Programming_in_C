// Q129: Read integers from a file and print their sum and average

#include <stdio.h>

int main() {
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    FILE *fp;
    fp = fopen("numbers.txt", "r");
    if (fp == NULL) {
        printf("Error: numbers.txt not found!");
        return 0;
    }

    int x, sum = 0, count = 0;

    while (fscanf(fp, "%d", &x) == 1) {
        sum += x;
        count++;
    }

    fclose(fp);

    if (count == 0) {
        printf("No numbers found in file.");
        return 0;
    }

    double avg = (double)sum / count;

    printf("Sum = %d\n", sum);
    printf("Average = %.2f", avg);

    return 0;
}
