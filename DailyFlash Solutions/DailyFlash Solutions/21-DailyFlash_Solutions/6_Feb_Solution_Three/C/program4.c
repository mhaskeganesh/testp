#include<stdio.h>


void main(){
	
	int ch = 'A';

	for(int itr  = 0 ; itr<4 ; itr++){

		for(int jtr =  0 ; jtr<4 ; jtr++){

			jtr<3-itr?printf(" "):printf("%c",ch++);
		}	
		printf("\n");
		ch = 'A';
	}	
}	
