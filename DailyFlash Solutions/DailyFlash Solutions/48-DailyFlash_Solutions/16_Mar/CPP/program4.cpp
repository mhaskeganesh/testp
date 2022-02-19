
#include <iostream>

int main() {

	int n;
	std::cout << "Enter Number : ";
	std::cin >> n;
	for(int i = n; i>= 1; i--){
		for(int j = 1; j < n+i; j++){
			if(j > n-i){
				std::cout << j << "\t";
			}
			else
				std::cout << ("\t");
		}
		std::cout << ("\n");
	}
}
