/* Q111: Write a program to take an integer array arr and an integer k as inputs.
Find the first negative integer in every subarray (window) of size k.
If no negative exists in a window, print 0. */

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
        int found = 0;
        for(j = i; j < i + k; j++){
            if(a[j] < 0){
                printf("%d ", a[j]);
                found = 1;
                break;
            }
        }
        if(!found) printf("0 ");
    }

    return 0;
}
