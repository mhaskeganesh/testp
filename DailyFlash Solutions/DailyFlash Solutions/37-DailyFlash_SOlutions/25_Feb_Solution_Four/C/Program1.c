/* Problem Statement
 *
 * Program1 -- Write a Program that calculates Square Root of a number ranging in 200 to 600
 * {Note: Do not use library functions}
 *
 * */

//Include Header File for all input output Operations and String Operations
#include <stdio.h>

//Function Declaration of root
int root(int,int);

/* 
 * Entry Point function main
 * Function Name - main
 * Function Return Type - void
 * Function Arguments - void
 * */
void main() {

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
		printf("Enter Start Element and End Element of Series \n");
		/*
		 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
		 * */
		if(!scanf("%d",&lower_limit) || !scanf("%d",&upper_limit)){

			printf("Character Inputs not allowed, Enter Positive Integers only\n");
			//Store all the character input in a temporary string
			char* tmp;
			scanf("%s",tmp);
			lower_limit = 0;
		}
		//else-if statement if Condition 1 is false
		else if(lower_limit <= 0 || upper_limit <= 0){

			printf("Invalid, Only Positive values allowed\n");
		}

	}while(lower_limit <= 0 || upper_limit <= 0);

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
