#include <stdio.h>

void main(){

	for(int i = 0; i < 7; i++){

		for(int j = 0; j <= i; j++){

			if(i+j <= 6){

				printf("*\t");
			}
			else if(j < 4){	
				printf(" \t");
			}
		}
		printf("\n");
	}
}
