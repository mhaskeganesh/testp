/*Program 5 : Write a Program to print following Pattern.
Output :
0
0 0 
0 0 0
0 0 0 0*/


#include<stdio.h>

#define LOWERLIMIT 0
#define UPPERLIMIT 4

void main(){
	
	for(int outeritr = LOWERLIMIT ; outeritr < UPPERLIMIT ; outeritr++){
		
		for(int inneritr =  LOWERLIMIT ; inneritr <=outeritr ; inneritr++){
			
			printf("0 ");
		}	
		printf("\n");
	}	
}	
