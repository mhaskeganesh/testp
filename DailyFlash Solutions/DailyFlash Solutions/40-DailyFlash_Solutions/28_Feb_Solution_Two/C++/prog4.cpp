#include<iostream>

int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4 - i; j++) {
			std::cout << i + j << (char)(65 + j) << " ";
		}
		std::cout << "\n";
	}
}
