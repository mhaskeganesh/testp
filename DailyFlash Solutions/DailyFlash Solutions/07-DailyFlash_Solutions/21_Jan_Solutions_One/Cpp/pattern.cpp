/*Program 5 : Write a Program to print following Pattern.
Output :
0
0 0 
0 0 0
0 0 0 0*/


#include<iostream>

#define LOWERLIMIT 0
#define UPPERLIMIT 4

int main(){
	
	for(int outeritr = LOWERLIMIT ; outeritr < UPPERLIMIT ; outeritr++){
		
		for(int inneritr =  LOWERLIMIT ; inneritr <=outeritr ; inneritr++){
			
			printf("0 ");
		}	
		printf("\n");
	}	
}	
