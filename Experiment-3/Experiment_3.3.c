/*3.3. WAP to compute the BMI Index of the person and print the BMI values as per the following ranges. You can use the following formula to compute BMI= weight(kgs)/Height(Mts)*Height(Mts).*/
#include<stdio.h>

int main(){
	
	float w,h,b;	
	
	printf("Please enter your weight in kilograms.");
	scanf("%f", &w);
	
	printf("Please enter your height in metres.");
	scanf("%f",&h);
	
	b = w/(h*h);
	
	if(b<15){
		printf("Your BMI Index value is  %f,and you are under STARVATION category.",b);
	}
	else if(b<17.5){
		printf("Your BMI Index value is  %f,and you are under ANOREXIC category.",b);
	}
	else if(b<18.5){
		printf("Your BMI Index value is  %f,and you are under UNDERWEIGHT category.",b);
	}
	else if(b<24.9){
		printf("Your BMI Index value is  %f,and you are under IDEAL category.",b);
	}
	else if(b<25.9){
		printf("Your BMI Index value is  %f,and you are under OVERWEIGHT category.",b);
	}
	else if(b<39.9){
		printf("Your BMI Index value is  %f,and you are under OBESE category.",b);
	}
	else if(b>=40){
		printf("Your BMI Index value is  %f,and you are under Anorexic category.",b);
	}
	else{
		printf("Please check the values you entered.");
	}
	
	return 0;
	
}
