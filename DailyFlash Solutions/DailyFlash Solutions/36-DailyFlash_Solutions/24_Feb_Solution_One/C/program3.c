#include<stdio.h>


void main(){
	
	for(int itr =0 ;itr<3;itr++){
		
		for(int jtr = 0 ; jtr<4;jtr++){
			
			if (jtr%2==0){
				
				printf("white-black\t");
			}else{
				printf("black-white\t");
			}	

		}	
		printf("\n");
	}	

}	
