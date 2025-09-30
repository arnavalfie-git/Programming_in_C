/*Q14 (Conditional Statements)
Write a program to input a character and check whether it is a vowel or consonant using if–else.*/

#include <stdio.h>

int main(){
	
	char c;
	
	printf("Enter the character you want to check if its a vowel or consonant :");
	scanf("%c",&c);
	
	if(c == a || c == e || c == i || c == o || c == u || c == A || c == E || c == I || c == O || c == U ){
		
		printf("The entered character is a vowel.");
	}	
	else{
		printf("The entered character is a consonant.");
	}
	return 0;
}
