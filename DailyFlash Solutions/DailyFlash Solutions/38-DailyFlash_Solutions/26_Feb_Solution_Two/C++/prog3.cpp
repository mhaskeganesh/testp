#include<iostream>

int main() {
	int num, min = 9;
	std::cout << "Enter num: ";
	std::cin >> num;
	while(num != 0) {
		if(num % 10 <= min) {
			min= num % 10;
		}
		num /= 10;
	}
	std::cout << "Min: " << min;
}
