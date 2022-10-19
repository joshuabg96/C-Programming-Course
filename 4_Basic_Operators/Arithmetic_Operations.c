/*
    Ask the user to enter 2 numbers and we have to add, subtract, multiply and divide them
*/

#include <stdio.h>

int main(){
	
	float num1,num2,add,sub,mult,divi;          // Create the variables 
	
	
	printf("Type 2 numbers\n");                 // Request of the numbers
	scanf("%f %f",&num1,&num2);                 // Get the numbers
	
	
	add = num1 + num2;                          // Add
	sub = num1 - num2;                          // Substraction
	mult = num1 * num2;                         // Multiplication
	divi = num1 / num2;                         // Division
	
	printf("The sum of the numbers is %.2f\nSubstraction is %.2f\nMultiplication is %.2f\nDivision is %.2f\n",add,sub,mult,divi);
	
	return 0;
}