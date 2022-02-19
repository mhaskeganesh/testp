/* Problem Statement
 *
 * Program2 -- Write a Program that accepts a number from user and prints second minimum digit from that number.
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
	int num_input_1,temp = 0,digit,min = 9,min2 = 9;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */

	do {
		std::cout<<"Enter A number\n";
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
	

	//While Loop to Separate Each digit and check for minimum Digit
	while(temp > 0){

		digit = temp%10;
		if (digit < min){
			min2 = min;
			min = digit;
		}
		else if(digit < min2)
			min2 = digit;
		temp/=10;
	}

	printf("Second Minimum Digit of %d is %d\n",num_input_1,min2);

	return 0;
}
