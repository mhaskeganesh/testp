/* Problem Statement
 *
 * Program1 -- Write a Program that prints Binary of Each Digit from entered Number.
 *
 * */

//Include Header File for all input output Operations
#include <iostream>

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
 * Function Return Type - int
 * Function Arguments - void
 * */

int main() {

	/*
	 * Declarations
	 * num_input_1 - Integer type variable for user input
	 * temp - Temporary Variable
	 * cnt - To kkep count of Number of Digits
	 * sum - Top store the sum of the digits
	 * */
	int num_input_1,temp = 0,pow = 0,digit = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		std::cout<<"Enter A number \n";
		/*
		 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
		 * */

		std::cin>>num_input_1;

		//if statement if Condition 1 is false
		if(num_input_1 <= 0){

			std::cout<<"Invalid, Only Positive values allowed"<<std::endl;
		}
		else if(std::cin.fail()){

			std::cout<<"Characters are not allowed"<<std::endl;
		}
		else 
			break;

	}while(!std::cin.fail() && num_input_1 <= 0);

	temp = num_input_1;
	int rev = 0;
	while(temp > 0){

		rev = (rev*10) + temp%10;
		temp/=10;
	};

	temp = rev;

	//While loop to Separate Each Digit and Find its Binary value
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
		std::cout<<"The Binary Number of "<<(temp%10)<<" : ";
		for(int lc = 0; lc < 4; lc++){
			std::cout<<bin[lc];
		}
		std::cout<<std::endl;
		temp/=10;
	}

	return 0;
}
