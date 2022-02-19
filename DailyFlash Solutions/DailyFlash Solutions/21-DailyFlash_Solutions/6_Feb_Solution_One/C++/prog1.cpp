#include<iostream>

int main() {
	int n;
	std::cout << "Enter n : ";
	std::cin >> n;
	int a = 0, b = 1, c;
	std::cout << a << " " << b << " ";
	for(int i = 0; i < n - 2; i++) {
		c = a + b;
		std::cout << c << " ";
		a = b;
		b = c;
	}
	return 0;
}
