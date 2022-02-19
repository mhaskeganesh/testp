/* Problem Statement
 *
 * Program2 -- Write a Program that takes a number as input from user and prints it into words.
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
	int num_input_1,temp = 0,digit;

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

	//While loop to reverse the Number
	while(temp > 0){

		rev = (rev*10) + temp%10;
		temp/=10;
	};

	temp = rev;

	//While loop to Separate the digits of the input Number
	while(temp > 0){

		digit = temp%10;

		switch (digit) {

			case 0 : printf("Zero\t");
				 break;

			case 1 : printf("One\t");
				 break;

			case 2 : printf("Two\t");
				 break;

			case 3 : printf("Three\t");
				 break;

			case 4 : printf("Four\t");
				 break;

			case 5 : printf("Five\t");
				 break;

			case 6 : printf("Six\t");
				 break;

			case 7 : printf("Seven\t");
				 break;

			case 8 : printf("Eight\t");
				 break;

			case 9 : printf("Nine\t");
				 break;

			default : printf("Invalid\n");
				  break;
		}

		temp/=10;

	}

	std::cout<<std::endl;
	return 0;
}
