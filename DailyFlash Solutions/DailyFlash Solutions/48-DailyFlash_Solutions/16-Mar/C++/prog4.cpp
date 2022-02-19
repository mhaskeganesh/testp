#include<iostream>

int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 7 - i; j++) {
			if(j < i) {
				std::cout << " ";
			} else {
				if(i == 3) {
					std::cout << j + 2;
					continue;
				}
				std::cout << j + 1;
			}
		}
		std::cout << "\n";
	}
}
