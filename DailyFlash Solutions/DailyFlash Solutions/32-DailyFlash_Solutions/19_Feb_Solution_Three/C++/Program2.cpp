/* Problem Statement
 *
 * Program2 -- Write a Program to find circum of a circle if user provides circumference of that same circle.
 *
 * */

//Include Header File for all input output Operations
#include <iostream>

#define PI 3.142

/* 
 * Entry Point function main
 * Function Name - main
 * Function Return Type - int
 * Function Arguments - void
 * */

int main() {

	/*
	 * Declarations
	 * circum - Float type variable for user input of Circumference
	 *
	 * */
	float circum = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		std::cout<<"Enter The Circumference of Circle \n";
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

	std::cout<<"The Radius of the Circle is "<<(circum/(2*PI))<<std::endl;

	return 0;
}
