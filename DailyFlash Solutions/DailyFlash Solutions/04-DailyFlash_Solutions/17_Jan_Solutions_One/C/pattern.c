/*
Program 4: Write a Program to Print following Pattern
2 4 6 8
2 4 6 8
2 4 6 8
2 4 6 8

*/

#include<stdio.h>

#define UPPERLIMIT 4
#define LOWERLIMIT 1

void main(){
	
	for(int outerItr = LOWERLIMIT ; outerItr <= UPPERLIMIT ; outerItr++){
		
		for(int innerItr = LOWERLIMIT ; innerItr <= UPPERLIMIT ; innerItr++ ){
			
			printf("%d\t",innerItr*2);
		}
		printf("\n");	
	}	

}	
