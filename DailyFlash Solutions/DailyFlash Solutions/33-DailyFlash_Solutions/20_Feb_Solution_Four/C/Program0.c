/* Problem Statement
 *
 * Write a Program that computes Cartesian space value of a point P(x, y) if user provides that radius and angle of that point in Polar coordinates space.
 * {Note: Considered 2D polar space then x & y values for Cartesian space computed as, x = r * cos (θ) & y = r * sin (θ)}
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
	 * angle - Integer type variable for user input for angle in degres
	 * radius - Integer type variable for user input for Radius
	 * 
	 * Float
	 * x - To store Cartesian X - Co-ordinate
	 * y - To store Cartesian Y - Co-ordinate
	 * */
	int angle,radius,flag = 1;
	float x,y;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - Only Integer inputs are allowed
	 * */
	do {
		printf("Enter Angle and Radius of the Point in the Polar Coordinate Space\n");
		/*
		 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
		 * */
		if(!scanf("%d",&angle) || !scanf("%d",&radius) ){

			printf("Character Inputs not allowed, Enter Integers only\n");
			//Store all the character input in a temporary string
			char* tmp;
			scanf("%s",tmp);
			angle = radius = 0;
			flag = 1;
		}
		else
			flag = 0;

	}while(flag);

	//If Radius is Negative make it positive 
	radius < 0 ? radius = -radius : 1 ;

	//Convert the Entered Angle in Radians since sin and cos function arguments consider it in radians
	double deg = angle * (PI/180);

	//Calculate X and Y Co-ordinates in the co-ordinate space
	x = radius * (cos(deg));
	y = radius * (sin(deg));

	//Print the Cartesian Co-ordinates
	printf("The Cartesian Coordinates are \nX = %.2f\nY = %.2f\n",x,y);

}
