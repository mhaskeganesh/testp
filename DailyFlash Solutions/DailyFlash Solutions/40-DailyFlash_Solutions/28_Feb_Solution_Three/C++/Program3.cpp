/* Problem Statement
 *
 * Program3 -- Write a Program to Print following Pattern.
 *	
 *		0A	1B	2C	3D
 *		1A	2B	3C
 *		2A	3D
 *		3A		
 *			
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
	int rows = 0;

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

			if ((ilc+olc) < rows){
			
				printf("%d%c\t",ilc+olc,(65+ilc));		
			}
		}

		std::cout<<std::endl;
	}
	return 0;
}
