#include<iostream>

int main() {
	int a, n, d;
	std::cout << "Enter 1st term : ";
	std::cin >> a;
	std::cout << "Enter number of terms : ";
	std::cin >> n;
	std::cout << "Enter common difference : ";
	std::cin >> d;
	std::cout << "AP : ";
	for(int i = 1; i <= n; i++) {
		std::cout << a + (i - 1) * d << " ";
	}
	return 0;
}
