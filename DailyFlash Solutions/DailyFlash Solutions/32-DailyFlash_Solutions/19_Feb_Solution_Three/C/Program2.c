/* Problem Statement
 *
 * Program2 -- Write a Program to find radius of a circle if user provides circumference of that same circle.
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
	 * circumference - Float type variable for user input of Radius
	 * */
	float circumference;

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
		if(!scanf("%f",&circumference)){

			printf("Character Inputs not allowed, Enter Positive Integers only\n");
			//Store all the character input in a temporary string
			char* tmp;
			scanf("%s",tmp);
			circumference = 0;
		}
		//else-if statement if Condition 1 is false
		else if(circumference <= 0){

			printf("Invalid, Only Positive values allowed\n");
		}

	}while(circumference <= 0);

	//Print Radius of the Circle
	printf("The Radius of Cirlce with circumference %.2f is %.2f\n",circumference,(circumference/(2*PI)));
}
