#include<iostream>

int main() {
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			if(i == j)
				std::cout << "= ";
			else 
				std::cout << j + 1 << " ";
		}
		std::cout << "\n";
	}
	return 0;
}
