/* Problem Statement
 *
 * Program1 -- Write a Program that sums up all the digits from an entered number and finds average of that sum and print them both.
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
	 * temp - Temporary Variable
	 * cnt - To kkep count of Number of Digits
	 * sum - Top store the sum of the digits
	 * */
	int num_input_1,temp = 0,cnt = 0,sum = 0;

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

	//While loop to Calculate the sum of the digits of the Number
	while(temp > 0){

		sum = sum + (temp%10);
		cnt++;
		temp/=10;
	}

	//Print the Sum of Digits and Average
	std::cout<<"The Sum of the Digits of Number "<<num_input_1<<" is "<<sum<<" and Average is "<<((float)sum/cnt)<<std::endl;

	return 0;
}
