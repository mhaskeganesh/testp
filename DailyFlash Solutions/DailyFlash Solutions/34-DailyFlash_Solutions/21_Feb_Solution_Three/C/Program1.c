/* Problem Statement
 *
 * Program1 -- Write a Program that prints octal value of Each Digit from entered Number.
 *
 * */

//Include Header File for all input output Operations and String Operations
#include <stdio.h>
#include <string.h>

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
	char oct[10];

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

		char *h = oct;

		digit = temp%10;

		while(1){		
			//Convert the base 10 number (decimal) to base 8 (Octal)
			int check = digit%8;

			//Convert into Octal Character's ASCII values
			*h = (char)(check+48);
			h++;
			digit/=8;
			if (digit == 0){
				
				*h = '\0';
				break;
			}
		}

		//Print the Octal String
		printf("The Octal Number of %d : ",temp%10);
		for(int lc = strlen(oct); lc >= 0; lc--){
			printf("%c",oct[lc]);
		}
		printf("\n");

		temp/=10;
	}
}






