#include<iostream>

int main() {
	int num = 7;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4 - i; j++) {
			std::cout << num << " ";
			num += 7;
		}
		std::cout << "\n";	
	}
	return 0;
}
