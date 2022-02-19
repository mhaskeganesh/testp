/* Problem Statement
 *
 * Program1 -- Write a Program that calculates diameter of a circle if user provides circumference of the same circle. {Note: π = 3.142}
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
	 * circum - User input variable to store circum of Circle
	 * diameter - to store diameter of Circle
	 *
	 * */
	float circum = 0, diameter = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */

	do {
		std::cout<<"Enter Circumference of Circle\n";
		/*
		 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
		 * */

		std::cin>>circum;

		//if statement if Condition 1 is false
		if(circum <= 0){

			std::cout<<"Invalid, Only Positive values allowed"<<std::endl;
		}
		else if(std::cin.fail()){

			std::cout<<"Characters are not allowed"<<std::endl;
		}
		else 
			break;

	}while(!std::cin.fail() && circum <= 0);

	diameter = circum/3.142;

	printf("Diameter Of Circle is %.2f\n",diameter);

	return 0;
}

