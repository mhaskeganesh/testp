/* Problem Statement
 *
 * Program0 -- Write a Program that computes Cartesian space value of a point P(x, y, z) if user provides that radius, angle theta (θ) & angle phi (φ) of that point in Polar coordinates space.
{Note: Considered 3D polar space then x, y, & z values for Cartesian space computed as, x = r * sin (θ) * cos (φ), y = r * sin (θ) * sin (φ) & z = r * cos (θ)}
 *
 * */

//Include Header File for all input output Operations and mathematical operations
#include <stdio.h>
#include <math.h>

#define PI 3.142

/* 
 * Entry Point function main
 * Function Name - main
 * Function Return Type - void
 * Function Arguments - void
 * */
void main() {

	/*
	 * Declarations
	 * Integer
	 * theta - Integer type variable for user input for angle theta in degrees
	 * phi - Integer type variable for user input for angle phi in degrees
	 * radius - Integer type variable for user input for Radius
	 * 
	 * Float
	 * x - To store Cartesian X - Co-ordinate
	 * y - To store Cartesian Y - Co-ordinate
	 * z - To store Cartesian Z - Co-ordinate
	 * */
	int theta,radius,phi,flag = 1;
	float x,y,z;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - Only Integer inputs are allowed
	 * */
	do {
		printf("Enter Radius Angle Theta and Angle Phi of the Point in the Polar Coordinate Space\n");
		/*
		 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
		 * */
		if(!scanf("%d",&radius) || !scanf("%d",&theta) || !scanf("%d",&phi) ){

			printf("Character Inputs not allowed, Enter Integers only\n");
			//Store all the character input in a temporary string
			char* tmp;
			scanf("%s",tmp);
			theta = radius = 0;
			flag = 1;
		}
		else
			flag = 0;

	}while(flag);

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

}
