/* Problem Statement
 *
 * Program0 -- Write a Program that prints the Harshad numbers ranging in 1 to 100.
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
		std::cout<<"Enter Last element of the Harshad Series"<<std::endl;
		/*
		 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
		 * */

		std::cin>>num_input_1;

		//if statement if Condition 1 is false
		if(std::cin.fail()){

			std::cout<<"Characters are not allowed"<<std::endl;
		}
		else if(num_input_1 <= 0){

			std::cout<<"Only Positive Values only "<<std::endl;
		}
		else 
			break;

	}while(num_input_1 <= 0 && !std::cin.fail());

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

	return 0;
}
