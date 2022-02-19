#include<iostream>

int main() {
	int temp = 5, num;
	for(int i = 0; i < 4; i++) {
		if(i > 0) {
			temp += (2 * i - 1);
		}
		num = temp;
		
		for(int j = 0; j < 7 - i; j++) {
			if(j < i) {
				std::cout << "\t";
			} else {
				std::cout << num << "\t";
				num += i;
			}
		}
		std::cout << "\n";
	}
}
