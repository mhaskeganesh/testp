/* Problem Statement
 *
 * Program4 -- Write a Program that prints frequency of each unique digit from a number provided by user.
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
	 * */
	int num_input_1,temp = 0,digit;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		printf("Enter A number and Digit to check frequency of\n");
		/*
		 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
		 * */
		if(!scanf("%d",&num_input_1) ){

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

	//Integer array to Store count of Each Digit
	int digits[10] = {0};

	//While Loop to Separate Each digit and Keep Count in an Array
	while(temp > 0){

		digit = temp%10;
		digits[digit]++;
		temp/=10;
	}

	//For Loop to print the count of Each digit
	for(int lc = 0; lc < 10; lc++){

		//If-else to check if the digit is Present, and then print its count
		if(digits[lc] != 0){

			printf("Frequency of %d is %d\n",lc,digits[lc]);
		}
	}

}



