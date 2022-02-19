#include<stdio.h>


void main(){
	
	char ch[]={'C','O','R','E'};

	for(int itr=0;itr<4;itr++){
		
		for(int jtr = 0 ; jtr<4 ;jtr++){
			
			jtr<itr?printf("\t"):printf("%c\t",ch[jtr]);

		}	
		printf("\n");
	}	
	
}	
