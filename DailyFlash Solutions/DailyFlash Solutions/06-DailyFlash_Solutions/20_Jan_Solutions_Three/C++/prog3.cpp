#include<iostream>

int main() {
	int i;
	std::cout << "Input : ";
	std::cin >> i;
	i % 2 == 0 ? std::cout << "Output : Even" : std::cout << "Output : Odd";
	return 0;
}
