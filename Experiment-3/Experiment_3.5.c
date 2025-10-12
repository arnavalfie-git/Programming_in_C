/*3.5. According to the gregorian calendar, it was Monday on the date 01/01/01. If any year is input through the keyboard write a program to find out what is the day on 1st January of this year.*/

#include<stdio.h>
int main(){
printf("Name: Arnav Singh\nSAP ID: 590027588\nCourse: BSc CS\nBatch: B1");
printf("\n~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n");
int y,i,d=0,day;
printf("Enter a year: ");
scanf("%d",&y);
for(i=1;i<y;i++){
if((i%400==0)||(i%4==0&&i%100!=0))
d+=366;
else
d+=365;
}
day=d%7;
printf("01/01/%d was a ",y);
switch(day){
case 0:printf("Monday");break;
case 1:printf("Tuesday");break;
case 2:printf("Wednesday");break;
case 3:printf("Thursday");break;
case 4:printf("Friday");break;
case 5:printf("Saturday");break;
case 6:printf("Sunday");break;
}
return 0;
}
