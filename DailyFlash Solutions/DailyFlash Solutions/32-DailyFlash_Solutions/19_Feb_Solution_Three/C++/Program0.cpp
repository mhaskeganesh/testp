/* Problem Statement
 *
 * Program0 -- Write a Program to print sum of an an Arithmetic Progression (A.P.) series. Take Starting element, Total count of elements in A.P. & the Common Difference from user.
 * {Note: an AP (i.e. Arithmetic Progression is such series which has common difference between every consecutive elements, AP of common difference 2 starting from 20 can be: 20, 22, 24, 26 . . .}
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
	 * start - Integer type variable for user input for start element
	 * com_dif - Integer type variable for user input for Common Difference
	 * count - Integer type variable for user input for Number of elements
	 * sum - To store sum of AP
	 * */
	int start,com_dif,count,sum = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - Count Should Be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		std::cout<<"Enter Start element and Common-difference and Number of elements of the AP in this Order only \n";
		/*
		 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
		 * */

		std::cin>>start;
		std::cin>>com_dif;
		std::cin>>count;

		//if statement if Condition 1 is false
		if(count <= 0){

			std::cout<<"Number of Elements Cannot be 0 or Negative"<<std::endl;
		}
		else if(std::cin.fail()){

			std::cout<<"Characters are not allowed"<<std::endl;
		}
		else 
			break;

	}while(!std::cin.fail() && count <= 0);

	std::cout<<"The Arithmentic Progression with"<<std::endl;
	std::cout<<"Start = "<<start<<"\t"<<"Number of Elements = "<<count<<"\t"<<"and Common Difference = "<<com_dif<<" is"<<std::endl;

	//Calculate and print the elements of the AP upto the count
	for(int lc = 0; lc < count; lc++){

		std::cout<<(start + (com_dif*lc))<<"\t";
		sum = sum + (start + (com_dif*lc));
	}

	std::cout<<std::endl;
	std::cout<<"The Sum of the Given AP is "<<sum<<std::endl;

	return 0;
}
