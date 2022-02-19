/* Problem Statement
 *
 * Program0 -- Write a Program that prints the Harshad numbers ranging in 1 to 100.
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
	 * temp - To store a temporary number for calculations
	 * sum - To store sum of the digits of the Number
	 * */
	int num_input_1 = 0,temp = 0,sum = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		printf("Enter Last Element of the Harshad Series \n");
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

	printf("The Series of Harshad Number upto %d is\n",num_input_1);

	//For loop to check for all numbers in the range
	for(int lc = 1; lc <= num_input_1; lc++){
		temp = lc;
		sum = 0;

		//While loop to Calculate sum of the digits of the input Number
		while(temp > 0){

			sum = sum +  temp%10;
			temp/=10;
		}

		//If-else to check for Harshad Number
		if((lc % sum) == 0)
			printf("%d\t",lc);
	}
	printf("\n");	
}
