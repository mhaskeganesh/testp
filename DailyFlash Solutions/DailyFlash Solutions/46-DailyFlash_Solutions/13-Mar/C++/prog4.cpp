#include<iostream>

int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 7; j++) {
			if(j < 4) {
				if(j > 2 - i) {
					if(j == 3) 
						std::cout << "#";
					else
						std::cout << "*";
				} else {
					std::cout << " ";
				}
			} else {
				if(j < 4 + i) {
					std::cout << "*";
				}
			}
		}
		std::cout << "\n";
	}
}
