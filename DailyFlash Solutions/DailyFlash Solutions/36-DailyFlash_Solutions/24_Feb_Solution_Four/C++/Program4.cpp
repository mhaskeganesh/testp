/* Problem Statement
 *
 * Program4 -- Write a Program that prints frequency of each unique digit from a number provided by user.
 *
 * */


//Include Header File for all input output Operations
#include <iostream>

/* 
 * Entry Point function main
 * Function Name - main
 * Function Return Type - int
 * Function Arguments - void
 * */

int main() {

	/*
	 * Declarations
	 * num_input_1 - Integer type variable for user input
	 * digit - to store each digit of a number
	 * temp - To store a temporary number for calculations
	 *
	 * */
	int num_input_1 = 0,temp = 0,digit = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */

	do {
		std::cout<<"Enter A number to check frequency of its Digits\n";
		/*
		 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
		 * */

		std::cin>>num_input_1;

		//if statement if Condition 1 is false
		if(num_input_1 <= 0){

			std::cout<<"Invalid, Only Positive values allowed"<<std::endl;
		}
		else if(std::cin.fail()){

			std::cout<<"Characters are not allowed"<<std::endl;
		}
		else 
			break;

	}while(!std::cin.fail() && num_input_1 <= 0);

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

	return 0;
}
