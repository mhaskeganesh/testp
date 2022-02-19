/* Problem Statement
 *
 * Program2 -- Write a Program to print AP in reverse order take last Element & Common Difference from user. {Note: Use While Loop}
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
		printf("Enter Last element and Common-difference of the AP in this Order only\n");
		/*
		 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
		 * */
		if(!scanf("%d",&last) || !scanf("%d",&com_dif) ){

			printf("Character Inputs not allowed, Enter Positive Integers only\n");
			//Store all the character input in a temporary string
			char* tmp;
			scanf("%s",tmp);
			last = com_dif = 0;
			flag = 1;
		}
		else
			flag = 0;

	}while(flag);

	com_dif < 0 ? com_dif = -com_dif : 1 ;
	last < 0 ? last = -last : 1 ;

	printf("The Reverse Arithmentic Progression with\nLast = %d\tand Common Difference = %d is\n",last,com_dif);
	
	element = last;
	//Calculate and print the elements of the AP upto the count
	while((element-com_dif) >= 0){

		printf("%d\t",element);
		element-=com_dif;
	}
	printf("\n");

}
