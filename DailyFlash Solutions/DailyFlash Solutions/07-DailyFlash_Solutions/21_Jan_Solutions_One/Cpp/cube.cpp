/*Program 2 : Write a Program t o print cu be of first 20 numbers .
Output:
Cube of 1: 1
Cube of 2: 8
Cube of 3: 27
.
.
.
Cube of 20: 8000
*/


#include<iostream>

int main(){
		
	for(int itr = 1 ;itr <= 20 ; itr++){
		
		printf("Cube of %d is %d \n",itr,itr*itr*itr);
	}	
}	
