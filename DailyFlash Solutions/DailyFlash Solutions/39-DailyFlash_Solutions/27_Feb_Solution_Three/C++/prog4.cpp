#include<iostream>

int main(void) {
	int num = 65;
	for(int i = 0; i < 4; i++) {
		for(int j = 0; j < 4 - i; j++) {
			std::cout << (char)(num) << " ";
			if(j < 3 - i)
				num += j + 1;
		}
		std::cout << "\n";
	}
}
