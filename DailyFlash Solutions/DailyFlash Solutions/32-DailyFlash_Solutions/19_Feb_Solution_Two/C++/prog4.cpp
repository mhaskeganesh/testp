#include<iostream>

int main() {
	char c1 = 'E', c2 = 'a';
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4; j++) {
			if(j >= i) {
				if(j % 2 == 0) {
					std::cout << c1 << " ";
					c1--;
				} else {
					std::cout << c2 << " ";
					c2++;
				}
			} else {
				std::cout << "  ";
			}
		}
		std::cout << "\n";
	}
	return 0;
}
