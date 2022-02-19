/* Problem Statement
 *
 * Program1 -- Write a Program that prints Hexadecimal value of Each Digit from entered Number.
 *
 * */

//Include Header File for all input output Operations
#include <stdio.h>

/* 
 * Entry Point function main
 * Function Name - main
 * Function Return Type - void
 * Function Arguments - void
 * */
void main() {

	/*
	 * Declarations
	 * num_input_1 - Integer type variable for user input
	 * digit - to store each digit of a number
	 * temp - To store a temporary number for calculations
	 *
	 * Hex - Character array to store Hexadecimal Value
	 * */
	int num_input_1,temp = 0,digit;
	char Hex[10];

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		printf("Enter A number \n");
		/*
		 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
		 * */
		if(!scanf("%d",&num_input_1)){

			printf("Character Inputs not allowed, Enter Positive Integers only\n");
			//Store all the character input in a temporary string
			char* tmp;
			scanf("%s",tmp);
			num_input_1 = 0;
		}
		//else-if statement if Condition 1 is false
		else if(num_input_1 <= 0){

			printf("Invalid, Only Positive values allowed\n");
		}

	}while(num_input_1 <= 0);

	temp = num_input_1;
	int rev = 0;

	//While loop to reverse the Number
	while(temp > 0){

		rev = (rev*10) + temp%10;
		temp/=10;
	};

	temp = rev;

	//While loop to Separate the digits of the input Number
	while(temp > 0){

		char *h = Hex;

		digit = temp%10;
		
		//Convert the base 10 number (decimal) to base 16 (HexaDecimal)
		int check = digit%16;
		
		//If the hexadecimal character is less than or equal to 9, Convert it into Numeric ASCII values
		//Else Convert into Hex Character's ASCII values
		check <= 9 ? (*h = (char)(check+48)) : (*h = (char)(check+55));	
		
		//Print the HexaDecimal String
		printf("The HexaDecimal Number of %d : %s\n",digit,Hex);
		temp/=10;
	}
}






