/*Experiment 4.2: WAP to print the multiplication table of the number entered
by the user.
It should be in the correct formatting. Num * 1 = Num */

#include<stdio.h>
int main(){
printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
int n,i;
printf("Enter a number: ");
scanf("%d",&n);
printf("\nMultiplication Table of %d:\n",n);
for(i=1;i<=10;i++)
printf("%d * %d = %d\n",n,i,n*i);
return 0;
}
