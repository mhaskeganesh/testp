/* Problem Statement
 *
 * Program2 -- Write a Program that calculates radius of a circle if user provides the area covered by that circle.
 *
 * */


//Include Header File for all input output Operations
#include <iostream>
#include <math.h>

float squareRoot(float num);

/* 
 * Entry Point function main
 * Function Name - main
 * Function Return Type - int
 * Function Arguments - void
 * */

int main() {

	/*
	 * Declarations
	 * area - User input variable to store area of Circle
	 * radius - to store radius of Circle
	 *
	 * */
	float area = 0, radius = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */

	do {
		std::cout<<"Enter Area of Circle\n";
		/*
		 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
		 * */

		std::cin>>area;

		//if statement if Condition 1 is false
		if(area <= 0){

			std::cout<<"Invalid, Only Positive values allowed"<<std::endl;
		}
		else if(std::cin.fail()){

			std::cout<<"Characters are not allowed"<<std::endl;
		}
		else 
			break;

	}while(!std::cin.fail() && area <= 0);

	radius = squareRoot((area/3.142));

	printf("Radius Of Circle is %.2f\n",radius);

	return 0;
}

float squareRoot(float num) {

	float root = 0, inter = 0, acuracy = 0;
	root = (float)(num / 2);
	acuracy = 0.00001f;
	while((float)(fabs(root*root - num)) > acuracy){
		inter = (float)(num / root);
		root = (float)((root + inter )/2);
	}
	
	return root;
}
