/* Q110: Write a program to take an integer array arr and an integer k as inputs.
Find the maximum element in each subarray (window) of size k. Print the maximums. */

#include<stdio.h>

int main(){
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, k, i, j;
    scanf("%d", &n);

    int a[n];
    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d", &k);

    for(i = 0; i <= n - k; i++){
        int max = a[i];
        for(j = i + 1; j < i + k; j++){
            if(a[j] > max) max = a[j];
        }
        printf("%d ", max);
    }

    return 0;
}
