/* Problem Statement
 *
 * Program3 -- Write a Program to Print following Pattern.
 *	
 *		0	1	10	11
 *			10	11	100
 *				100	101
 *					110
 *
 * */
 
 
//Include Header File for all input output Operations
#include <iostream>

/*
 * power function to calculate exponention of the form number^index
 * Function name - power
 * Function return type - int
 * Function arguments - int,int
 * 	1) number - The number whose exponention need to be calculated
 * 	2) index - The value of exponent
 * */

int power(int number, int index){

	int answer = 1;

	//while to calculate exponention value from the 0 to the specified Index
	while(index > 0){

		answer*=number;
		index--;
	}
	return answer;
}


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
	 * pow - To keep the power for binary conversions
	 * digit - to store each digit of the number
	 * */
	int rows = 0,pow = 0,digit = 0;

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

			if (ilc < olc)

				std::cout<<" \t";
			else {

				int bin = 0;
				pow = 0;
				digit = (ilc+olc);

				//While Loop to convert Decimal Number into Binary Number
				while(digit > 0){

					bin = bin + ((digit%2) * power(10,pow));
					digit/=2;
					pow++;
				}
					std::cout<<bin<<"\t";
				
			}
		}

		std::cout<<std::endl;
	}

	return 0;
}

