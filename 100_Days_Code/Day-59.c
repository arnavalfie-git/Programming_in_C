/* Q109: Write a program to take an integer array arr and an integer k as inputs.
Print the maximum sum of all subarrays of size k. */

#include<stdio.h>

int main(){
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n,k,i;
    scanf("%d",&n);

    int a[n];
    for(i=0;i<n;i++) scanf("%d",&a[i]);

    scanf("%d",&k);

    int sum = 0;
    for(i=0;i<k;i++) sum += a[i];

    int max = sum;

    for(i=k;i<n;i++){
        sum = sum - a[i-k] + a[i];
        if(sum > max) max = sum;
    }

    printf("%d", max);

    return 0;
}
