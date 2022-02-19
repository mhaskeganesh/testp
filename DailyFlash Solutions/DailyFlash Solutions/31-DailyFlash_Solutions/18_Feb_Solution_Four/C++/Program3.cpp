/* Problem Statement
 *
 * Program3 -- Write a Program to Print following Pattern.
 *	
 *		0	1	4	9	16
 *			2	6	12	20
 *				8	15	24
 *					18	28
 *						32
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
	 * */
	int rows;

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

	std::cout<<"The output of Pattern is "<<std::endl;

	//Outer for loop is for Number of Rows
	for(int olc = 0; olc < rows; olc++){

		//Inner for loop is for Number of Columns
		for(int ilc = 0; ilc < rows; ilc++){
		
			if (ilc < olc)

				std::cout<<" \t";
			else 
				std::cout<<((ilc*ilc)+(olc*ilc))<<"\t";		
		}

		std::cout<<std::endl;
	}

	return 0;
}



/*
 *
 * Dry Run of Outer For loop for Actual Pattern
 * Let input = rows = 5
 * Consider F - False Conditions and T - True Conditions
 *
 * Initialisation	Condition	Operation-1		
 * 					Inner For Loop	 						(Printing)		olc--
 * 					Initialisation		Condition	If-Condition   Calc	Operation-2	ilc--  	(olc)
 *										Operation-1				(ilc)	
 *
 * 1] olc = 0		0  < 5 T	ilc = 0			0  < 5 T	0 < 0 F		 0 + 0	' 0\t'		1
 * 								1  < 5 T	1 < 0 F		 1 + 0	' 1\t'		2
 * 								2  < 5 T	2 < 0 F		 4 + 0	' 4\t'		3
 * 								3  < 5 T	3 < 0 F		 9 + 0	' 9\t'		4
 * 								4  < 5 T	4 < 0 F		16 + 0	'16\t'		5
 * 								5  < 5 F	Exit			'\n'			1
 * 
 * 2] 			1  < 5 T	ilc = 0			0  < 5 T	0 < 1 T		 -	'  \t'		1
 * 								1  < 5 T	1 < 1 F		 1 + 1	' 2\t'		2
 * 								2  < 5 T	2 < 1 F		 4 + 2	' 6\t'		3
 * 								3  < 5 T	3 < 1 F		 9 + 3	'12\t'		4
 * 								4  < 5 T	4 < 1 F		16 + 4	'20\t'		5
 * 								5  < 5 F	Exit			'\n'			2
 * 
 * 3] 			2  < 5 T	ilc = 0			0  < 5 T	0 < 2 T		 -	'  \t'		1
 * 								1  < 5 T	1 < 2 T		 -	'  \t'		2
 * 								2  < 5 T	2 < 2 F		 4 + 4	' 8\t'		3
 * 								3  < 5 T	3 < 2 F		 9 + 6	'15\t'		4
 * 								4  < 5 T	4 < 2 F		16 + 8	'24\t'		5
 * 								5  < 5 F	Exit			'\n'			3
 * 
 * 4] 			3  < 5 T	ilc = 0			0  < 5 T	0 < 3 T		 -	'  \t'		1
 * 								1  < 5 T	1 < 3 T		 -	'  \t'		2
 * 								2  < 5 T	2 < 3 T		 -	'  \t'		3
 * 								3  < 5 T	3 < 3 F		 9 + 9	'18\t'		4
 * 								4  < 5 T	4 < 3 F		16 + 12	'28\t'		5
 * 								5  < 5 F	Exit			'\n'			4
 * 
 * 5] 			4  < 5 T	ilc = 0			0  < 5 T	0 < 4 T		 -	'  \t'		1
 * 								1  < 5 T	1 < 4 T		 -	'  \t'		2
 * 								2  < 5 T	2 < 4 T		 -	'  \t'		3
 * 								3  < 5 T	3 < 4 T		 -	'  \t'		4
 * 								4  < 5 T	4 < 4 F		16 + 16	'32\t'		5
 * 								5  < 5 F	Exit			'\n'			5
 * 
 * 6] 			5  < 5 F	Exit
 * 
 *
 * */
