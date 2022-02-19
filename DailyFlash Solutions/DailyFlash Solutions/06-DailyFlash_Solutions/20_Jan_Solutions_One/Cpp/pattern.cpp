/*
Program 5: Write a Program to print following Pattern.
Output:
0
1 0
1 0
1 0
1
0 0 0 0
1 1 1 1

*/

#include<iostream>

#define UPPERLIMIT 4
#define LOWERLIMIT 0
int main(){
	
	for(int outritr = LOWERLIMIT ; outritr < UPPERLIMIT ; outritr++ ){
		
		for(int inneritr = LOWERLIMIT ; inneritr < UPPERLIMIT ; inneritr++ ){
					
			outritr%2==0?printf("0 "):printf("1 ");
		}	
		printf("\n");
	}	

}	
