/* Problem Statement
 *
 * Program1 -- Write a Program that calculates Square Root of a number entered by user.
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
	 * num_input_1 - Integer type variable for user input
	 * */
	int num_input_1 = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		printf("Enter A number \n");
		/*
		 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
		 * */
		if(!scanf("%d",&num_input_1)){

			printf("Character Inputs not allowed, Enter Positive Integers only\n");
			//Store all the character input in a temporary string
			char* tmp;
			scanf("%s",tmp);
			num_input_1 = 0;
		}
		//else-if statement if Condition 1 is false
		else if(num_input_1 <= 0){

			printf("Invalid, Only Positive values allowed\n");
		}

	}while(num_input_1 <= 0);

	int sqrt = root(num_input_1,2);
	if(sqrt > 0)
		printf("Square Root of %d is %d\n",num_input_1,sqrt);
	else
		printf("The Number %d is not a perfect Square\n",num_input_1);

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
