
#include <iostream>

int  main() {

	int n = 4;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j < i){
				std::cout << ("\t");
			}
			else{
				std::cout << (i*j) << "\t";	
			}
		}
		std::cout << ("\n");
	}
}
