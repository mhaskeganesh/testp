#include<iostream>

int main() {
	int a, n, d;
	std::cout << "Enter a : ";
	std::cin >> a;
	std::cout << "Enter n : ";
	std::cin >> n;
	std::cout << "Enter d : ";
	std::cin >> d;
	std::cout << "sum : " << ((float)n/2) * (2 * a + (n - 1) * d);
	return 0;
}
