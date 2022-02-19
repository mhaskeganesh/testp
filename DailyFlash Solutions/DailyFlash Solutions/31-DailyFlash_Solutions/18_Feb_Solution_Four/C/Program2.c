/* Problem Statement
 *
 * Program2 -- Write a Program to find circumference of a Circle of radius entered by user.
 * {Note: The formula to determine Circumference of Circle is 2πr. Where π = 3.142}
 *
 * */

//Include Header File for all input output Operations
#include <stdio.h>

//Constant Values replaced at the time of pre-processing
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
	 * radius - Integer type variable for user input of Radius
	 * */
	int radius;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		printf("Enter Radius of Circle \n");
		/*
		 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
		 * */
		if(!scanf("%d",&radius)){

			printf("Character Inputs not allowed, Enter Positive Integers only\n");
			//Store all the character input in a temporary string
			char* tmp;
			scanf("%s",tmp);
			radius = 0;
		}
		//else-if statement if Condition 1 is false
		else if(radius <= 0){

			printf("Invalid, Only Positive values allowed\n");
		}

	}while(radius <= 0);

	//Print Circumference of the Circle
	printf("The Circumference of Cirlce with radius %d is %.2f\n",radius,(2*PI*radius));
}
