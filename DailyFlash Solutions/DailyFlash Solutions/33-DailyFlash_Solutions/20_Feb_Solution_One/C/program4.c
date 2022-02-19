#include<stdio.h>

int bin(int num);

void main(){
	
	
	for(int itr =0 ; itr <4 ; itr++){
		
		for(int jtr = 0 ; jtr < 4 ; jtr++){
			
			jtr<itr?printf("\t"):printf("%d\t",bin(itr+jtr));

		}	
		printf("\n");

	}	

	
}	


int bin(int num){
	
	switch(num){

		case 0:
			return 0;
			break;
		case 1:
			return 1;
			break;
		case 2:
			return 10;
			break;
		case 3:
			return 11;
			break;
		case 4:
			return 100;
			break;
		case 5:
			return 101;
			break;
		case 6:
			return 110;
			break;
				
			
	}	

}	
