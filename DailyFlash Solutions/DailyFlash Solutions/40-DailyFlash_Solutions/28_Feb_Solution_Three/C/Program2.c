/* Problem Statement
 *
 * Program2 -- Write a Program that accepts a number from user and prints second Maximum digit from that number.
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
	int num_input_1,temp = 0,digit,min = 9,min2 = 9;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		printf("Enter A number\n");
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

	//While Loop to Separate Each digit and check for Maximum Digit
	while(temp > 0){

		digit = temp%10;
		if (digit < min){
			min2 = min;
			min = digit;
		}
		else if(digit < min2){
			min2 = digit;
		}
		temp/=10;
	}

	printf("Second Minimum Digit of %d is %d\n",num_input_1,min2);

}



