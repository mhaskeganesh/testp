#include<iostream>

int main() {
	int inc = 0, k;
	for(int i = 0; i < 4; i++) {
		k = 0;
		for(int j = 0; j < 4 - i; j++) {
			std::cout << (char)(97 + inc + k) << " ";
			k++;	
		}
		inc += 2;
		std::cout << "\n";
	}
	return 0;
}
