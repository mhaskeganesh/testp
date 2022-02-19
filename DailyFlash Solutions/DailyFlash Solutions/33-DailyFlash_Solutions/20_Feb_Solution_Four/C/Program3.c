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
#include <stdio.h>

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
 * Function Return Type - void
 * Function Arguments - void
 * */
void main() {

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

				int bin = 0;
				pow = 0;
				digit = (ilc+olc);

				//While Loop to convert Decimal Number into Binary Number
				while(digit > 0){

					bin = bin + ((digit%2) * power(10,pow));
					digit/=2;
					pow++;
				}

				printf("%d\t",bin);
			}
		}
		printf("\n");	
	}
}

