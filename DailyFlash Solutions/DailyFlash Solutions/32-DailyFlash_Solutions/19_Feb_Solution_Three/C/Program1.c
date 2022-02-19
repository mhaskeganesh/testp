/* Problem Statement
 *
 * Program1 -- Write a Program that prints Binary of Each Digit from entered Number.
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
	 * num_input_1 - Integer type variable for user input
	 * bin[4] = Array to store binary values in a group of bits
	 * pow - to keep the array index
	 * digit - to store each digit of a number
	 * temp - To store a temporary number for calculations
	 * */
	int num_input_1,temp = 0,pow = 0,digit;

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
	while(temp > 0){

		rev = (rev*10) + temp%10;
		temp/=10;
	};

	temp = rev;
	//While loop to Separate the digits of the input Number
	while(temp > 0){

		int bin[4] = {0,0,0,0};
		pow = 3;
		digit = temp%10;
		
		//While Loop to convert Decimal Digit Number into Binary Number
		while(digit > 0){
		
			bin[pow] = (digit%2);
			digit/=2;
			pow--;
		}

		//Print the resulting Binary Value of The Digit in group of 4 Bits
		printf("The Binary Number of %d : ",temp%10);
		for(int lc = 0; lc < 4; lc++){
			printf("%d",bin[lc]);
		}
		printf("\n");
		temp/=10;
	}
}






