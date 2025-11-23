/* Q113: Write a program to take an integer array arr and an integer k as inputs.
Find and print the kth smallest element in the array. */

#include<stdio.h>

int main(){
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, k, i, j, t;
    scanf("%d", &n);

    int a[n];
    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    scanf("%d", &k);

    for(i = 0; i < n - 1; i++){
        for(j = i + 1; j < n; j++){
            if(a[j] < a[i]){
                t = a[i];
                a[i] = a[j];
                a[j] = t;
            }
        }
    }

    printf("%d", a[k - 1]);

    return 0;
}
