#include<iostream>

int main() {
	int num;
	std::cout << "Enter num : ";
	std::cin >> num;
	int temp = num;
	while(num != 0) {
		std::cout << temp << "/" << num % 10 << " = " << temp / (num % 10) << "\n";
		num /= 10;
	}
	return 0;
}
