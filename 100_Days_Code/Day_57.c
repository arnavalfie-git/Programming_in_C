/* Q107: Write a program to take an array arr[] of integers as input, the task is to find the previous greater element for each element of the array in order of their appearance.
Previous greater element = nearest element on the LEFT which is greater.
If none exists → print -1.
Print results comma-separated.
Brute force only (nested loops), no stack. */

#include<stdio.h>

int main(){
    printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
    printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");

    int n,i,j;
    scanf("%d",&n);
    int a[n];

    for(i=0;i<n;i++) scanf("%d",&a[i]);

    for(i=0;i<n;i++){
        int pg=-1;
        for(j=i-1;j>=0;j--){
            if(a[j] > a[i]){
                pg = a[j];
                break;
            }
        }
        printf("%d",pg);
        if(i<n-1) printf(", ");
    }

    return 0;
}
