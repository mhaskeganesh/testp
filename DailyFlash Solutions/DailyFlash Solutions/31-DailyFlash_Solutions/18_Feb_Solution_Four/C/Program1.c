/* Problem Statement
 *
 * Program1 -- Write a Program that sums up all the digits from an entered number and finds average of that sum and print them both.
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
	 * num_input_1 - Integer type variable for user input
	 * temp - To store a temporary number for calculations
	 * sum - To store sum of the digits of the Number
	 * cnt - To keep the count of number of Digits in the number
	 * */
	int num_input_1,temp = 0,sum = 0,cnt = 0;

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

	temp = num_input_1;

	//While loop to Calculate sum of the digits of the input Number
	while(temp > 0){

		cnt++;
		sum = sum +  temp%10;
		temp/=10;
	}

	//Print Sum of Digits of the Number
	printf("The Sum of Digits of %d is : %d\n",num_input_1,sum);
	
	//Print the Average of the digits of the Number
	printf("The Average of Digits of %d is : %.2f\n",num_input_1,((float)sum/cnt));
}
