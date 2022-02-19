#include<stdio.h>


void main(){

	for(int itr = 0 ;itr<5 ; itr++){
		
		for(int jtr = 0; jtr<5 ; jtr++){
			
			jtr<itr?printf("\t"):printf("%d\t",(itr+jtr)*jtr);
		}	
		printf("\n");
	}		
}	
