/* Problem Statement
 *
 * Program4 -- Write a Program calculates mid-point of a line made up of two points A (4, 5) & B (2, 4).
 * {Note: mid (X, Y) = { (( x1 + x2) / 2), ((y1 + y2) / 2) } }
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
		 * Integer
		 * flag1 and flag2 to Control Inputs for Two different Points
		 *
		 * Float
		 * x1 = X Co-ordinate of Point 1
		 * y1 = Y Co-ordinate of Point 1
		 * x2 = X Co-ordinate of Point 2
		 * y2 = Y Co-ordinate of Point 2
		 * x  = X Co-ordinate of Mid-Point 
		 * x  = Y Co-ordinate of Mid-Point 
		 * */
	int flag1 = 1,flag2 = 1;
	float x1 = 0,x2 = 0,y1 = 0,y2 = 0,x = 0,y = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - Only Integer inputs are allowed
	 * */

	do {

		if(flag1){
			std::cout<<"Enter X and Y co-ordinates of Point-1"<<std::endl;
			/*
			 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
			 * */

			std::cin>>x1;
			std::cin>>y1;

			if(std::cin.fail()){

				std::cout<<"Characters are not allowed"<<std::endl;
			}
			else 
				flag1 = 0;
		}

		if(flag2){
			std::cout<<"Enter X and Y co-ordinates of Point-1"<<std::endl;
			/*
			 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
			 * */

			std::cin>>x2;
			std::cin>>y2;

			if(std::cin.fail()){

				std::cout<<"Characters are not allowed"<<std::endl;
			}
			else 
				flag2 = 0;
		}

	}while(!std::cin.fail() && flag2 && flag1);

	//Calculate Mid-Point
	x = (x1 + x2)/2;
	y = (y1 + y2)/2;

	printf("The Midpoint is X = %.2f and Y = %.2f\n",x,y);

	return 0;
}
