/* Problem Statement
 *
 * Program3 -- Write a Program to Print following Pattern.
 *	
 *		C	O	R	E
 *			O	R	E
 *				R	E
 *					E
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
	 * rows - Integer type variable for user input of rows 
	 * numCount - Count of Capital Letters in Pattern
	 * flag = to switch if-else
	 * */
	int rows = 0;
	char str[8] = "CORE2WEB";

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		printf("Enter Number of Rows\n");
		/*
		 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
		 * */
		if(!scanf("%d",&rows)){

			printf("Character Inputs not allowed, Enter Positive Integers only\n");
			//Store all the character input in a temporary string
			char* tmp;
			scanf("%s",tmp);
			rows = 0;
		}
		//else-if statement if Condition 1 is false
		else if(rows <= 0){

			printf("Invalid, Only Positive values allowed\n");
		}

	}while(rows <= 0);

	printf("The output of Pattern is \n");

	//Outer for loop is for Number of Rows
	for(int olc = 0; olc < rows; olc++){

		//Inner for loop is for Number of Columns
		for(int ilc = 0; ilc < rows; ilc++){

			if (ilc < olc)

				printf(" \t");
			else {

				printf("%c\t",str[ilc]);
			}
		}
		printf("\n");	
	}
}

