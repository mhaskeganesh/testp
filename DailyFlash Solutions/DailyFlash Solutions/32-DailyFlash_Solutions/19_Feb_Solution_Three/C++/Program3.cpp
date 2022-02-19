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
	 * rows - Integer type variable for user input of rows 
	 * numCount - Count of Capital Letters in Pattern
	 * */
	int rows,numCount = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		std::cout<<"Enter Number of Rows"<<std::endl;
		/*
		 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
		 * */
		std::cin>>rows;
		if(!std::cin.fail()){

			std::cout<<"Character Inputs not allowed, Enter Positive Integers only"<<std::endl;

		}
		//else-if statement if Condition 1 is false
		else if(rows <= 0){

			std::cout<<"Invalid, Only Positive values allowed"<<std::endl;
		}

	}while(rows <= 0 && !std::cin.fail());

	for(int lc = 1; lc <= rows; lc+=2){

		numCount+=lc;
	}

	char odd = ('A' + numCount);
	char even = 'a';

	std::cout<<"The output of Pattern is "<<std::endl;

	//Outer for loop is for Number of Rows
	for(int olc = 0; olc < rows; olc++){

		//Inner for loop is for Number of Columns
		for(int ilc = 0; ilc < rows; ilc++){

			if (ilc < olc)

				std::cout<<" \t";
			else {

				if(ilc%2 == 0) {
					std::cout<<(char)odd<<"\t";
					odd--;
				}
				else {

					std::cout<<(char)even<<"\t";
					even++;
				}
			}
		}

		std::cout<<std::endl;
	}

	return 0;
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
