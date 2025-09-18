/*Q9 (User Inputs, Operations & Output)
Write a program to calculate simple and compound interest for given principal, rate, and time.*/

#include <stdio.h>
int main(){
	
	int z;
	printf("Select between compound and simple interest\n1.Compound interest\n2.Simple Interest");
	scanf("%d",&z);
	
	if(z==1){
		
		float p;
		float r;
		float n;
		float t;
		float a1;
		float a2;
		float a3;
		float a;
		
		
		printf("This program calculates the compound interest when provided principal amount, rate of interest, the number of time interest is compounded annually and the duration for which the amount is taken.");
		
		printf("Enter the principal amount :");
		scanf("%f",&p);
		
		printf("Enter the rate of interest :");
		scanf("%f",&r);
		
		printf("Enter the times amount is compounded annually :");
		scanf("%f",&n);
		
		printf("Enter the time for which amount is taken for :");
		scanf("%f",&t);
		
		a1 = (r/n)+ 1;
		a2 =  n*t;
		a3 = pow(a1,a2);
		a = p*a3;
		
		printf("The final amount is : %f", a);
			
	}
	
	else if(z==2){
		
		float p;
		float r;
		float t;
		float a;
		
		
		printf("Enter the principal amount :");
		scanf("%f",&p);
		
		printf("Enter the rate of interest :");
		scanf("%f",&r);
		
		printf("Enter the time duration :");
		scanf("%f",&t);
		
		
		a = (p*r*t)/100
		
		printf("The final amount is :%f",a);
			
	}
	
	else{
		printf("Please enter either 1 or 2");
	}
	
	return 0;
}
