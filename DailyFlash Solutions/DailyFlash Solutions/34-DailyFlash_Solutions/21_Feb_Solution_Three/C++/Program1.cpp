/* Problem Statement
 *
 * Program1 -- Write a Program that prints Octal value of Each Digit from entered Number.
 *
 * */


//Include Header File for all input output Operations
#include <iostream>
#include <cstring>

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
	char oct[10];

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

	return 0;
}
