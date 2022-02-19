/* Problem Statement
 *
 * Program2 -- Write a Program to find circumference of a Circle of radius entered by user.
 * {Note: The formula to determine Circumference of Circle is 2πr. Where π = 3.142}
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
	 * radius - Float type variable for user input of Radius
	 *
	 * */
	float radius = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		std::cout<<"Enter The Radius of Circle \n";
		/*
		 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
		 * */

		std::cin>>radius;

		//if statement if Condition 1 is false
		if(radius <= 0){

			std::cout<<"Invalid, Only Positive values allowed"<<std::endl;
		}
		else if(std::cin.fail()){

			std::cout<<"Characters are not allowed"<<std::endl;
		}
		else 
			break;

	}while(!std::cin.fail() && radius <= 0);

	std::cout<<"The Circumference of the Circle is "<<(2*PI*radius)<<std::endl;

	return 0;
}
