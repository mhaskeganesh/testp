#include<iostream>

int main() {
	int num;
	for(int i = 0; i < 5; i++) {
		num = i * i;
		for(int j = 0; j < 5; j++) {
			if(j >= i) {
				std::cout << num <<"\t";
				num += i;
			} else {
				std::cout << "\t";
			}
		}
		std::cout << "\n";
	}
}
