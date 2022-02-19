#include<iostream>

int main() {
	int l, n, d;
	std::cout << "Enter last term : ";
	std::cin >> l;
	std::cout << "Enter common difference : ";
	std::cin >> d;
	std::cout << "AP : ";
	while(l > 0) {
		std::cout << l << " ";
		l = l - d;
	}
	return 0;
}
