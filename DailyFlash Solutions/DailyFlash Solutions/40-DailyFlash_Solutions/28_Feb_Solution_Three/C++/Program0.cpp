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
#include <iostream>

int power(int number,int index);

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
	 * temp - To store a temporary number for calculations
	 * sum - To store sum of the digits of the Number
	 * */
	int num_input_1 = 0,temp = 0,sum = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */


	do {
		std::cout<<"Enter A Number"<<std::endl;
		/*
		 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
		 * */

		std::cin>>num_input_1;

		//if statement if Condition 1 is false
		if(std::cin.fail()){

			std::cout<<"Characters are not allowed"<<std::endl;
		}
		else if(num_input_1 <= 0){

			std::cout<<"Only Positive Values only "<<std::endl;
		}
		else 
			break;

	}while(num_input_1 <= 0 && !std::cin.fail());

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

	return 0;
}

int power(int number,int index){
	
	int answer = 1;
	for(int lc = 1; lc <= index; lc++){
	
		answer = answer*number;
	}

	return answer;
}
