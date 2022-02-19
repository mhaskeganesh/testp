/* Problem Statement
 *
 * Program2 -- Write a Program that calculates radius of a circle if user provides the area covered by that circle.
 *
 * */

//Include Header File for all input output Operations
#include <stdio.h>
#include <math.h>

float squareRoot(float num);

/* 
 * Entry Point function main
 * Function Name - main
 * Function Return Type - void
 * Function Arguments - void
 * */
void main() {

	/*
	 * Declarations
	 * area - Integer type variable for user input for Area of Circle
	 *
	 * */
	float area = 0,radius = 0;

	/*
	 * Use of do-while loop till all the conditions are true
	 * Condition 1 - All values should be greater than 0
	 * Condition 2 - Only Integer inputs are allowed
	 * */
	do {
		printf("Enter Area of Circle\n");
		/*
		 * if there is character input the scanf returns 0, Hence for unsuccesfull return of scanf execute
		 * */
		if(!scanf("%f",&area) ){

			printf("Character Inputs not allowed, Enter Positive Integers only\n");
			//Store all the character input in a temporary string
			char* tmp;
			scanf("%s",tmp);
			area = 0;
		}
		//else-if statement if Condition 1 is false
		else if(area <= 0){

			printf("Invalid, Only Positive values allowed\n");
		}

	}while(area <= 0);

	radius = squareRoot((area/3.142));

	printf("Radius of Circle is %.2f\n",radius);

}

float squareRoot(float num) {

	float root = 0, inter = 0, acuracy = 0;
	root = (float)(num / 2);
	acuracy = 0.00001f;
	while((float)(fabs(root*root - num)) > acuracy){
		inter = (float)(num / root);
		root = (float)((root + inter )/2);
	}
	
	return root;
}



