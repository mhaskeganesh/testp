#include<iostream>

int main() {

	for(int i = 0; i < 5; i++) {
		for(int j = 0; j < 3; j++) {
			if(i < 3) {
				if(j < 2 - i)
					std::cout << "\t";
				else {
					std::cout << (j + 1) * i * (j + 1) * i << "\t";
				}
			} else {
				if(j < i - 2)
					std::cout << "\t";
				else { 	
					std::cout << (j + 1) * i * (j + 1) * i << "\t";
				}
			}
		}
		std::cout << "\n";
	}
}
