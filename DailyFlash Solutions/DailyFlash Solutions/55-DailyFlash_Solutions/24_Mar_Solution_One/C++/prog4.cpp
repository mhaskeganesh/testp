#include<iostream>

int main() {
	for(int i = 0; i < 7; i++) {
		if(i < 4) {
			for(int j = 0; j < i + 1; j++) {
				std::cout << "*";	
			} 
		} else {
			for(int j = 0; j < 7 - i; j++) {
				std::cout << "*";
			}
		}
		std::cout << "\n";
	}
}
