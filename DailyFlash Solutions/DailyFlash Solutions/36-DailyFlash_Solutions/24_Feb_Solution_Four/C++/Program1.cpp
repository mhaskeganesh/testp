/* Problem Statement
 *
 * Program1 -- Write a Program that calculates Square Root of a number entered by user.
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
	 * num_input_1 - Integer type variable for user input
	 * */
	int num_input_1 = 0;

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

	int sqrt = root(num_input_1,2);
	if(sqrt > 0)
		printf("Square Root of %d is %d\n",num_input_1,sqrt);
	else
		printf("The Number %d is not a perfect Square\n",num_input_1);

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


