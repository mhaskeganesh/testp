#include<iostream>

int main() {
	int inc;
	for(int i = 0; i < 4; i++) {
		inc = 0;
		for(int j = 0; j < 4; j++) {
			if(j < 3 - i) {
				std::cout << "  ";
			}
			else {
				std::cout << (char)(65 + inc) << " "; 
				inc++;
			}
		}
		std::cout << "\n";
	}
	return 0;
}
