#include<iostream>

int main() {
	int num, max = 0;
	std::cout << "Enter num: ";
	std::cin >> num;
	while(num != 0) {
		if(num % 10 >= max) {
			max = num % 10;
		}
		num /= 10;
	}
	std::cout << "Max : " << max;
}
