/* Problem Statement
 *
 * Program0 -- Write a Program that prints the Series of palindrome ranging in 300 to 600
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
	 * upper_limit - Integer type variable for end of Series
	 * lower_limit - Integer type variable for start of Series
	 * temp - To store a temporary number for calculations
	 * */
	int upper_limit = 0,temp = 0,lower_limit = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		printf("Enter Start Element and End Element of the Pallindrome Series \n");
		/*
		 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
		 * */
		if(!scanf("%d",&lower_limit) || !scanf("%d",&upper_limit)){

			printf("Character Inputs not allowed, Enter Positive Integers only\n");
			//Store all the character input in a temporary string
			char* tmp;
			scanf("%s",tmp);
			upper_limit = 0;
			lower_limit = 0;
		}
		//else-if statement if Condition 1 is false
		else if(upper_limit <= 0 || lower_limit <= 0){

			printf("Invalid, Only Positive values allowed\n");
		}

	}while(upper_limit <= 0 || lower_limit <= 0);

	//If Upper Limit is less than Lower Limit the Swap the Values
	if(upper_limit < lower_limit){

		temp = upper_limit;
		upper_limit = lower_limit;
		lower_limit = upper_limit;
	}
	printf("The Series of Pallindrome Number Between %d  and %d is\n",lower_limit,upper_limit);

	//For loop to check for all numbers in the range
	for(int lc = lower_limit; lc <= upper_limit; lc++){
		temp = lc;
		int rev = 0;

		//While loop to reverse the Number
		while(temp > 0){

			rev = (rev*10) + temp%10;
			temp/=10;
		};

		if(lc == rev)
			printf("%d\t",lc);
	}
	printf("\n");	
}
