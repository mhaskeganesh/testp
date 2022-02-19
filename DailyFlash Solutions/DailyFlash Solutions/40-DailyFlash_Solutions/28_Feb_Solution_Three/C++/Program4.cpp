/* Problem Statement
 *
 * Program4 -- Write a Program calculates Distance between two points of a line, if user provides Point A & Point B of that line.
 * {Note: Distance of a line is computed as d(line) =√(x2-x1) 2 + (y2-y1) 2 }
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
	 * Integer
	 * flag1 and flag2 to Control Inputs for Two different Points
	 *
	 * Float
	 * x1 = X Co-ordinate of Point 1
	 * y1 = Y Co-ordinate of Point 1
	 * x2 = X Co-ordinate of Point 2
	 * y2 = Y Co-ordinate of Point 2
	 * slope - Slope of Line formed by points 1 and 2
	 * */
	int flag1 = 1,flag2 = 1;
	float x1 = 0,x2 = 0,y1 = 0,y2 = 0,distance = 0;

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

	//Calculate Distance
	float x = (x2 - x1)*(x2 - x1);
	float y = (y2 - y1)*(y2 - y1);
	distance = fabs(squareRoot(x+y));

	printf("The Distance between the points is = %.2f\n",distance);
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
