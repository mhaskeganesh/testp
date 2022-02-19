#include<stdio.h>


void main(){
	
	int num=1;
	for(int itr =0 ;itr<4; itr++){

		for(int jtr = 0;jtr<4-itr;jtr++){
			
			printf("%d\t",num*7);
			num++;
		}	
		printf("\n");
	}	
}	
