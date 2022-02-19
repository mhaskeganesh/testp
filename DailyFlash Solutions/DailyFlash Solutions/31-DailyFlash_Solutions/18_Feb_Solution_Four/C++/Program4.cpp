/* Problem Statement
 *
 * Program4 -- Write a Program that takes a number as input from user and prints only those digits from that number, which are perfect divisors of the actual number
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
	 * cnt - To keep the count of factors of digit
	 * revNum - To Store the reversed Number
	 * */
	int num_input_1,temp = 0,revNum = 0;

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

	//While loop to reverse the input Number
	while(temp > 0){

		revNum = (revNum*10) + temp%10;
		temp/=10;
	}

	temp = revNum;

	std::cout<<"The Perfect Divisors of Number "<<num_input_1<<" are "<<std::endl;

	//While loop to separate each digit of the number and check for perfect divisors
	while(temp > 0){

		if((num_input_1 % (temp%10) == 0))
			std::cout<<(temp%10)<<"\t";
		temp/=10;
	}
	std::cout<<std::endl;

	return 0;
}
