/* Problem Statement
 *
 * Program3 -- Write a Program to Print following Pattern.
 *	
 *		E	a	D	b	
 *			c	C	d	
 * 	 			B	e	
 *	 	 			f	
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
	 * */
	int rows = 0,numCount = 0;

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

	for(int lc = 1; lc <= rows; lc+=2){

		numCount+=lc;
	}

	char odd = ('A' + numCount);
	char even = 'a';

	printf("The output of Pattern is \n");

	//Outer for loop is for Number of Rows
	for(int olc = 0; olc < rows; olc++){

		//Inner for loop is for Number of Columns
		for(int ilc = 0; ilc < rows; ilc++){

			if (ilc < olc)

				printf(" \t");
			else {

				if(ilc%2 == 0) {
					printf("%c\t",odd);
					odd--;
				}
				else {

					printf("%c\t",even);
					even++;
				}
			}
		}
		printf("\n");	
	}
}


/*
 *
 * Dry Run of Outer For loop for Actual Pattern
 * Let input = rows = 4
 * Consider F - False Conditions and T - True Conditions
 *
 * Initialisation	Condition	Operation-1		
 * 					Inner For Loop	 						(Printing)		olc--
 * 					Initialisation		Condition	If-Cond	 If-Cond	Operation-3	ilc--  	(olc)
 *										Opern-1  Operan-2			(ilc)	
 *
 * 1] olc = 0		0  < 4 T	ilc = 0			0  < 4 T	0 < 0 F  0%2 == 0 T	'E\t'		1
 * 								1  < 4 T	1 < 0 F  1%2 == 0 F	'a\t'		2
 * 								2  < 4 T	2 < 0 F	 0%2 == 0 T	'D\t'		3
 * 								3  < 4 T	3 < 0 F	 1%2 == 0 F	'b\t'		4
 * 								4  < 4 F	Exit			'\n'			1
 * 
 * 2] 			1  < 4 T	ilc = 0			0  < 4 T	0 < 1 T  0%2 == 0 T	' \t'		1
 * 								1  < 4 T	1 < 1 F  1%2 == 0 F	'c\t'		2
 * 								2  < 4 T	2 < 1 F  0%2 == 0 T	'C\t'		3
 * 								3  < 4 T	3 < 1 F  1%2 == 0 F	'd\t'		4
 * 								4  < 4 F	Exit			'\n'			2
 * 
 * 3] 			2  < 4 T	ilc = 0			0  < 4 T	0 < 2 T  0%2 == 0 T	' \t'		1
 * 								1  < 4 T	1 < 2 T  1%2 == 0 F	' \t'		2
 * 								2  < 4 T	2 < 2 F  0%2 == 0 T	'B\t'		3
 * 								3  < 4 T	3 < 2 F  1%2 == 0 F	'e\t'		4
 * 								4  < 4 F	Exit			'\n'			3
 * 
 * 4] 			3  < 4 T	ilc = 0			0  < 4 T	0 < 3 T  0%2 == 0 T	' \t'		1
 * 								1  < 4 T	1 < 3 T  1%2 == 0 F	' \t'		2
 * 								2  < 4 T	2 < 3 T  0%2 == 0 T	' \t'		3
 * 								3  < 4 T	3 < 3 F  1%2 == 0 F	'f\t'		4
 * 								4  < 4 F	Exit			'\n'			4
 * 
 * 5] 			4  < 4 F	Exit
 * 
 *
 *
 * */
