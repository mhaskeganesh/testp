#include<stdio.h>

void main(){

	for(int itr = 0 ;itr<4;itr++){

		for(int jtr = 0;jtr<4;jtr++){

			jtr<3-itr?printf(" "):printf("%d",jtr+1);
		}

		printf("\n");	
	}	

}	
