
#include <iostream>

int  main() {

	int n;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n-i; j++){
			std::cout << "*\t";
		}
		std::cout << ("\n");
	}
}
