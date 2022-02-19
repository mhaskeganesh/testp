/* Problem Statement
 *
 * Program4 -- Write a Program that takes a number as input from user and prints only perfect digits if it have any else prints appropriate message.
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
	 * digit - to store each digit of a number
	 * temp - To store a temporary number for calculations
	 * cnt - Counter to count Number of Perfect Digits
	 * sum - To calculate sum of the divisors
	 *
	 * */
	int num_input_1,temp = 0,digit,cnt = 0,sum = 0;

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
	int rev = 0;

	//While loop to reverse the Number
	while(temp > 0){

		rev = (rev*10) + temp%10;
		temp/=10;
	};

	temp = rev;

	//While loop to Separate the digits of the input Number
	while(temp > 0){

		digit = temp%10;
		sum = 0;

		//For loop to find the divisors of the Digits and calculate its sum
		for(int lc = 1; lc < digit; lc++){

			if(digit % lc == 0)
				sum+=lc;
		}

		//Check for Perfect digits
		if(digit != 0  && sum == digit){
			
			cnt++;
			printf("Perfect Digit : %d\n",digit);
		}
		temp/=10;
	}

	//If no perfect digits are found the print the message
	cnt == 0 ? printf("The number %d does not have any digit, which is perfect in nature\n",num_input_1) : 1 ;
}






