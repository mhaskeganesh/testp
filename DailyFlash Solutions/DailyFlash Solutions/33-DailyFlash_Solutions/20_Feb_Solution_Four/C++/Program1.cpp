/* Problem Statement
 *
 * Program1 -- Write a Program that prints Hexadecimal value of Each Digit from entered Number.
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
		std::cout<<"Enter A number \n";
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
	int rev = 0;
	while(temp > 0){

		rev = (rev*10) + temp%10;
		temp/=10;
	};

	temp = rev;

	//While loop to Separate Each Digit and Find its Binary value
	while(temp > 0){

		
		char *h = Hex;

		digit = temp%10;
		
		//Convert the base 10 number (decimal) to base 16 (HexaDecimal)
		int check = digit%16;
		
		//If the hexadecimal character is less than or equal to 9, Convert it into Numeric ASCII values
		//Else Convert into Hex Character's ASCII values
		check <= 9 ? (*h = (char)(check+48)) : (*h = (char)(check+55));	
		
		//Print the HexaDecimal String
		std::cout<<"The Hexadecimal Number of "<<(temp%10)<<" : "<<Hex<<std::endl;
		temp/=10;
	}

	return 0;
}
