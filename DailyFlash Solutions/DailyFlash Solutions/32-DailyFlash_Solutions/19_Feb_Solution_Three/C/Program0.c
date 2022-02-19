/* Problem Statement
 *
 * Program0 -- Write a Program to print sum of an an Arithmetic Progression (A.P.) series. Take Starting element, Total count of elements in A.P. & the Common Difference from user.
 * {Note: an AP (i.e. Arithmetic Progression is such series which has common difference between every consecutive elements, AP of common difference 2 starting from 20 can be: 20, 22, 24, 26 . . .}
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
	 * start - Integer type variable for user input for start element
	 * com_dif - Integer type variable for user input for Common Difference
	 * count - Integer type variable for user input for Number of elements
	 * sum - To store sum of AP
	 * */
	int start,com_dif,count,flag = 1,sum = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		printf("Enter Start element and Common-difference and Number of elements of the AP in this Order only\n");
		/*
		 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
		 * */
		if(!scanf("%d",&start) || !scanf("%d",&com_dif) || !scanf("%d",&count)){

			printf("Character Inputs not allowed, Enter Positive Integers only\n");
			//Store all the character input in a temporary string
			char* tmp;
			scanf("%s",tmp);
			start = count = com_dif = 0;
			flag = 1;
		}
		//else-if statement if Condition 1 is false
		else if(count <= 0){

			printf("Number of Elements cannot be less than or equal to 0\n");
			flag = 1;
		}
		else
			flag = 0;

	}while(flag);

	printf("The Arithmentic Progression with\nStart = %d\tNumber of Elements = %d\tand Common Difference = %d is\n",start,count,com_dif);
	
	//Calculate the Sum and print the elements of the AP upto the count
	for(int lc = 0; lc < count; lc++){

		printf("%d\t",(start + (com_dif*lc)));
		sum = sum + (start + (com_dif*lc));
	}

	printf("\n");
	printf("The Sum of The AP is %d\n",sum);

}
