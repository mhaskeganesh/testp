/* Problem Statement
 *
 * Program1 -- Write a Program that calculates Square Root of a number ranging in 200 to 600
 * {Note: Do not use library functions}
 *
 * */


//Include Header File for all input output Operations
#include <iostream>

//Function Declaration of root
int root(int,int);

/* 
 * Entry Point function main
 * Function Name - main
 * Function Return Type - int
 * Function Arguments - void
 * */

int main() {

	/*
	 * Declarations
	 * lower_limit - Integer type variable for user input
	 * */
	int lower_limit = 0,upper_limit = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */

	do {
		std::cout<<"Enter Start Element and End Element of Series \n";
		/*
		 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
		 * */

		std::cin>>lower_limit;
		std::cin>>upper_limit;

		//if statement if Condition 1 is false
		if(lower_limit <= 0 || upper_limit <= 0){

			std::cout<<"Invalid, Only Positive values allowed"<<std::endl;
		}
		else if(std::cin.fail()){

			std::cout<<"Characters are not allowed"<<std::endl;
		}
		else 
			break;

	}while(!std::cin.fail() && (lower_limit <= 0 || upper_limit <= 0));

	//If Upper Limit is less than Lower Limit the Swap the Values
	if(upper_limit < lower_limit){

		int temp = upper_limit;
		upper_limit = lower_limit;
		lower_limit = upper_limit;
	}
	printf("The Square Roots of Numbers Between %d  and %d is\n",lower_limit,upper_limit);

	//For loop to check for all numbers in the range
	for(int lc = lower_limit; lc <= upper_limit; lc++){
		int sqrt = root(lc,2);
		if(sqrt > 0)
			printf("Square Root of %d is %d\n",lc,sqrt);
	}

	return 0;
}


/*
 * root function to calculate root of form number to the index'th order
 * Function name - root
 * Function return type - int
 * Function arguments - int,int
 * 	1) number - The number whose root need to be calculated
 * 	2) index - The value of the order
 * */

int root(int number, int index){

	int answer = 0;

	for(int lc = 1; lc <= number; lc++){

		float temp = number;
		int cnt = index;
		while(cnt > 1){

			temp/=lc;
			cnt--;
		}
		if(temp == lc){

			answer = lc;
			break;
		}
		else 
			answer = 0;
	}
	return answer;
}


