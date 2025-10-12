/*Experiment 3.6: WAP using ternary operator, the user should input the length
and breadth of a rectangle,
one has to find out which rectangle has the highest perimeter.
The minimum number of rectangles should be three.*/

#include<stdio.h>
int main(){
printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
int n,i,maxi=0;
float l,b,p,maxp=0;
printf("Enter number of rectangles (min 3): ");
scanf("%d",&n);
if(n<3){
printf("Enter at least 3 rectangles");
return 0;
}
for(i=1;i<=n;i++){
printf("Enter length and breadth of rectangle %d: ",i);
scanf("%f%f",&l,&b);
p=2*(l+b);
maxi=(p>maxp)?i:maxi;
maxp=(p>maxp)?p:maxp;
}
printf("Rectangle %d has highest perimeter %.2f",maxi,maxp);
return 0;
}
