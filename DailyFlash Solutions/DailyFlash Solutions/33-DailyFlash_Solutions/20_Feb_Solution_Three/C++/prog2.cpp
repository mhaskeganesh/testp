#include<iostream>

int main() {

	int num;
	std::cout << "Enter num : ";
	std::cin >> num;
	while(num != 0) {
		std::cout << "Hex of " << num % 10 << " is " << num % 10 << "\n";
		num /= 10;
	}
	return 0;
}
