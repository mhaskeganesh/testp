/* Problem Statement
 *
 * Program1 -- Write a Program that calculates diameter of a circle if user provides circumference of the same circle. {Note: π = 3.142}
 *
 * */

//Include Header File for all input output Operations
#include <stdio.h>

/* 
 * Entry Point function main
 * Function Name - main
 * Function Return Type - void
 * Function Arguments - void
 * */
void main() {

	/*
	 * Declarations
	 * circum - Integer type variable for user input for Circumference of Circle
	 *
	 * */
	float circum = 0,diameter = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		printf("Enter Circumference of Circle\n");
		/*
		 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
		 * */
		if(!scanf("%f",&circum) ){

			printf("Character Inputs not allowed, Enter Positive Integers only\n");
			//Store all the character input in a temporary string
			char* tmp;
			scanf("%s",tmp);
			circum = 0;
		}
		//else-if statement if Condition 1 is false
		else if(circum <= 0){

			printf("Invalid, Only Positive values allowed\n");
		}

	}while(circum <= 0);

	diameter = circum/3.142;

	printf("Diameter of Circle is %.2f\n",diameter);

}


