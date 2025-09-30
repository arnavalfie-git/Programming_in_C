/*Q10 (User Inputs, Operations & Output)
Write a program to input time in seconds and convert it to hours:minutes:seconds format.*/

#include <stdio.h>

int main(){
	
	int s, seconds, minutes, hours;
	
	printf("Enter time in seconds :");
	scanf("%d",&s);
	
	hours = s/3600;
	minutes = (s%3600)/60;
	seconds = s%60;
	
	printf("The time = %02d : %02d : %02d",hours, minutes, seconds);
	
	
	return 0;
}
