/* Problem Statement
 *
 * Program0 -- Write a Program that computes Cartesian space value of a point P(x, y, z) if user provides that radius, theta theta (θ) & theta phi (φ) of that point in Polar coordinates space.
{Note: Considered 3D polar space then x, y, & z values for Cartesian space computed as, x = r * sin (θ) * cos (φ), y = r * sin (θ) * sin (φ) & z = r * cos (θ)}
 *
 * */

//Include Header File for all input output Operations
#include <iostream>
#include <math.h>

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
	 * Integer
	 * theta - Integer type variable for user input for theta in degres
	 * phi - Integer type variable for user input for phi in degres
	 * radius - Integer type variable for user input for Radius
	 * 
	 * Float
	 * x - To store Cartesian X - Co-ordinate
	 * y - To store Cartesian Y - Co-ordinate
	 * z - To store Cartesian Z - Co-ordinate
	 * */
	int theta = 0,radius = 0,phi = 0,flag = 1;
	float x,y,z;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - Only Integer inputs are allowed
	 * */
	 
	do {
		std::cout<<"Enter Radius Angle Theta and Angle Phi of the Point in the Polar Coordinate Space"<<std::endl;
		/*
		 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
		 * */

		std::cin>>radius;
		std::cin>>theta;
		std::cin>>phi;

		//if statement if Condition 1 is false
		if(std::cin.fail()){

			std::cout<<"Characters are not allowed"<<std::endl;
		}
		else 
			break;

	}while(!std::cin.fail());

	//If Radius is Negative make it positive 
	radius < 0 ? radius = -radius : 1 ;

	//Convert the Entered Angle in Radians since sin and cos function arguments consider it in radians
	double thetadeg = theta * (PI/180);
	double phideg = phi * (PI/180);

	//Calculate X Y and Z Co-ordinates in the co-ordinate space
	x = radius * (sin(thetadeg) * cos(phideg));
	y = radius * (sin(thetadeg) * sin(phideg));
	z = radius * (cos(thetadeg));

	//Print the Cartesian Co-ordinates
	printf("The Cartesian Coordinates are \nX = %.2f\nY = %.2f\nZ = %.2f\n",x,y,z);

	return 0;
}
