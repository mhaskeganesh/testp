/* Problem Statement
 *
 * Program2 -- Write a Program to print AP in reverse order take last Element & Common Difference from user. {Note: Use While Loop}
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
	 * last - Integer type variable for user input for last element
	 * com_dif - Integer type variable for user input for Common Difference
	 * element - to calculate the element in the AP
	 * */
	int last,com_dif,flag = 1,element = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		std::cout<<"Enter Last element and Common-difference of the AP in this Order only \n";
		/*
		 * if there is character input the cin returns 0, Hence for unsuccesfull return of cin execute
		 * */

		std::cin>>last;
		std::cin>>com_dif;

		if(std::cin.fail()){

			std::cout<<"Characters are not allowed"<<std::endl;
		}
		else 
			break;

	}while(!std::cin.fail());

	com_dif < 0 ? com_dif = -com_dif : 1 ;
	last < 0 ? last = -last : 1 ;

	std::cout<<"The Reverse Arithmentic Progression with"<<std::endl<<"Last = "<<last<<"\tand Common Difference = "<<com_dif<<" is"<<std::endl;

	element = last;
	//Calculate and print the elements of the AP upto the count
	while((element-com_dif) >= 0){

		std::cout<<element<<"\t";
		element-=com_dif;
	}

	std::cout<<std::endl;

	return 0;
}
