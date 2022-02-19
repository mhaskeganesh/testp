#include<iostream>

int main() {
	int num;
	std::cout << "Input : ";
	std::cin >> num;
	for(int i = 1; i <= 10; i++) {
		std::cout << i * num << std::endl;
	}
	return 0;
}
