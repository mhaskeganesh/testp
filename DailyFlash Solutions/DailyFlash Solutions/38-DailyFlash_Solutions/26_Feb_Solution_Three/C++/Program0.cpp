/* Problem Statement
 *
 * Program0 -- Write a Program that prints the Series of palindrome ranging in 300 to 600
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
		std::cout<<"Enter Start Element and End Element of the Pallindrome Series"<<std::endl;
		/*
		 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
		 * */

		std::cin>>lower_limit;
		std::cin>>upper_limit;

		//if statement if Condition 1 is false
		if(std::cin.fail()){

			std::cout<<"Characters are not allowed"<<std::endl;
		}
		else if(upper_limit <= 0){

			std::cout<<"Only Positive Values only "<<std::endl;
		}
		else 
			break;

	}while(upper_limit <= 0 && !std::cin.fail());
	
	//If Upper Limit is less than Lower Limit the Swap the Values
	if(upper_limit < lower_limit){
	
		temp = upper_limit;
		upper_limit = lower_limit;
		lower_limit = upper_limit;
	}

	printf("The Series of Pallindrome Numbers Between %d  and %d is\n",lower_limit,upper_limit);

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

	return 0;
}
