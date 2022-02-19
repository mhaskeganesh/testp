#include<iostream>


int main(){
	char ch ='a';
	for(int itr = 0; itr<4 ; itr++){

		
		for(int jtr = 0 ; jtr<4-itr ; jtr++){
			
			printf("%c",ch++);
		}	
		ch = 'a'+2*(itr+1);
		printf("\n");
	}	
}	
