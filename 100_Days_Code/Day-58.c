/* Q108: Write a program to take an integer array nums and print an array answer such that
answer[i] = product of all elements of nums except nums[i].
The product always fits in 32-bit integer.
No extra arrays except answer[] (allowed). */

#include<stdio.h>

int main(){
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n,i;
    scanf("%d",&n);
    int a[n], ans[n];

    for(i=0;i<n;i++) scanf("%d",&a[i]);

    long long left = 1;

    for(i=0;i<n;i++){
        ans[i] = left;
        left *= a[i];
    }

    long long right = 1;

    for(i=n-1;i>=0;i--){
        ans[i] = ans[i] * right;
        right *= a[i];
    }

    printf("[");
    for(i=0;i<n;i++){
        printf("%d", ans[i]);
        if(i<n-1) printf(", ");
    }
    printf("]");

    return 0;
}
