#include<iostream>

int main() {
	int n1 = 0;
	int rows;
	std::cout << "Enter rows : ";
	std::cin >> rows;
	for(int i = 0; i < rows; i++) {
		for(int j = 0; j < 4; j++) {
			if(n1 == 0) {
				std::cout << "white-black ";
				n1 = 1;
			}else if(n1 == 1) {
				std::cout << "black-white ";
				n1 = 0;
			}
		}
		std::cout << "\n";

	}
}
