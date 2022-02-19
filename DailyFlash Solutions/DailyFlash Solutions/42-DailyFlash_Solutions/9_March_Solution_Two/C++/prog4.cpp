#include<iostream>

int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 7; j++) {
			if(j < 4) {
				if(j < 3 - i) {
					std::cout << " ";
				} else {
					std::cout << "*";
				}
			} else {
				if(j < 4 + i)
					std::cout << "*";
			}
		}
		std::cout << "\n";
	}
	return 0;
}
