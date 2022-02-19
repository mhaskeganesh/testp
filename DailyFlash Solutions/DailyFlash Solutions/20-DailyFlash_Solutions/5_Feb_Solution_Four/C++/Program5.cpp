#include<iostream>

int main(void){

	for(int i = 4 ; i >= 1 ; i--){

		for(int j = 1 ; j <= 4 ; j++){
			
			(j < i) ? std::cout << "\t" : std::cout << j << "\t"; 
		}	
		std::cout << "\n";
	}
}

