/* Q112: Write a program to take an integer array arr as input.
Find the maximum sum of any contiguous subarray using Kadane's algorithm.
If all elements are negative, print the largest (least negative) element. */

#include<stdio.h>

int main(){
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n, i;
    scanf("%d", &n);

    int a[n];
    for(i = 0; i < n; i++) scanf("%d", &a[i]);

    int max_so_far = a[0];
    int curr_sum = a[0];

    for(i = 1; i < n; i++){
        if(curr_sum + a[i] < a[i])
            curr_sum = a[i];
        else
            curr_sum += a[i];

        if(curr_sum > max_so_far)
            max_so_far = curr_sum;
    }

    printf("%d", max_so_far);

    return 0;
}
