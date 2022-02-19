/* Problem Statement
 *
 * Program0 -- Write a Program that prints whether a number entered by user is Disarium Number or not.
{Note: A number can be termed as Disarium number if the sum of every digits
raised by their position in that number is equal to that number. E.g. 135, 1 is at
position 1, 3 is at position 2 & 5 is at position 3, then 1^1 + 3^2 + 5^3 = 1 + 9 +
125 = 135, so 135 is a Disarium Number}
 *
 * */

//Include Header File for all input output Operations
#include <stdio.h>

int power(int number,int index);

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
	 * */
	int num_input_1,temp = 0,sum = 0;

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
	int cnt = 0;
	int digits[20] = {0};

	//While loop to Calculate sum of the digits of the input Number
	while(temp > 0){

		cnt++;
		digits[cnt] = temp%10;
		temp/=10;	
	}
	
	for(int lc = 1; lc <= cnt; lc++){
	
		sum = sum + power(digits[lc],(cnt-lc+1));
	}

	//If-else to check for Dissarium Number
	if(num_input_1 == sum)
		printf("The Entered Number %d is Disarium Number\n",num_input_1);
	else
		printf("The Entered Number %d is not a Disarium Number\n",num_input_1);
	
}

int power(int number,int index){
	
	int answer = 1;
	for(int lc = 1; lc <= index; lc++){
	
		answer = answer*number;
	}

	return answer;
}
