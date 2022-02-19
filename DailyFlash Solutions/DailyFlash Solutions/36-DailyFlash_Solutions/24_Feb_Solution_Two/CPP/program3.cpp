
#include <iostream>

int  main() {

	int n = 4;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < 4; j++){
			if(j % 2 == 0){
				std::cout << ("white-black\t");
			}
			else{
				std::cout << ("black-white\t");	
			}
		}
		std::cout << ("\n");
	}
}
