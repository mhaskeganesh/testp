/* Problem Statement
 *
 * Program4 -- Write a Program calculates slope of a line if user provides the Two Points A & B of that line.
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

	/* Declarations
		 * Integer
		 * flag1 and flag2 to Control Inputs for Two different Points
		 *
		 * Float
		 * x1 = X Co-ordinate of Point 1
		 * y1 = Y Co-ordinate of Point 1
		 * x2 = X Co-ordinate of Point 2
		 * y2 = Y Co-ordinate of Point 2
		 * slope - Slope of Line formed by points 1 and 2
		 * */
	int flag1 = 1,flag2 = 1;
	float x1 = 0,x2 = 0,y1 = 0,y2 = 0,slope = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - Only Integer inputs are allowed
	 * */
	do {
		if(flag1){
			printf("Enter X and Y co-ordinates of Point-1\n");
			/*
			 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
			 * */
			if(!scanf("%f",&x1) || !scanf("%f",&y1)){

				printf("Character Inputs not allowed, Enter Positive Integers only\n");
				//Store all the character input in a temporary string
				char* tmp;
				scanf("%s",tmp);
			}
			else
				flag1 = 0;
		}

		if(flag2){
			printf("Enter X and Y co-ordinates of Point-2\n");
			/*
			 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
			 * */
			if(!scanf("%f",&x2) || !scanf("%f",&y2)){

				printf("Character Inputs not allowed, Enter Positive Integers only\n");
				//Store all the character input in a temporary string
				char* tmp;
				scanf("%s",tmp);
			}
			else 
				flag2 = 0;
		}

	}while(flag1 && flag2);

	//Calculate Slope
	slope = (y2 - y1)/(x2 - x1);

	printf("The Slope of Line is = %.2f\n",slope);
}
