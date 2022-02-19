#include<iostream>


int main(){

	
	for(int itr = 0 ;itr<4;itr++){

		for(int jtr = 0; jtr<4 ;jtr++){

			jtr==itr?printf("=\t"):printf("%d\t",jtr+1);	

		}	
		printf("\n");
	}	
}	
