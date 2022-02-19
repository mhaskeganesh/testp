/* Problem Statement
 *
 * Program4 -- Write a Program to check whether a number can be express as sum of two prime numbers.
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
	 * num_input_1 - Integer type variable for user input
	 * digit - to store each digit of a number
	 * temp - To store a temporary number for calculations
	 * cnt - Counter to count Number of Perfect Digits
	 * sum - To calculate sum of the divisors
	 *
	 * */
	int num_input_1,temp = 0,digit,cnt = 0,pc= 0;

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

	int prime[num_input_1/2];


	//For loop to find all prime numbers within the Range of Input Number
	for(int olc = 2; olc < num_input_1; olc++){

		cnt = 0;
		for(int ilc = 2; ilc < olc; ilc++){

			if(olc % ilc == 0)
				cnt++;
		}

		if (cnt == 0){

			prime[pc] = olc;
			pc++;
		}
	}

	//For loops to check if the Number can be represented as the sum of two prime numbers
	for(int olc = 0; prime[olc] != 0; olc++){

		for(int ilc = olc; prime[ilc] != 0; ilc++){

			if((prime[olc] + prime[ilc]) == num_input_1){

				printf("%d = %d + %d\n",num_input_1,prime[olc],prime[ilc]);
				break;
			}
			else if((prime[olc] + prime[ilc]) >= num_input_1){

				break;
			}
		}
	}
	return 0;
}
