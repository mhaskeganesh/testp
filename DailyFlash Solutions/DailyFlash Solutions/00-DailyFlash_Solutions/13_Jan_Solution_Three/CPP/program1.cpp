
#include <iostream>

int main() {

	int a, b;
	std::cout << ("Enter Numbers :") << std::endl;
	std::cin >> a >> b;

	std::cout << ((a >= b)? a : b) << (" is max Number among ") << a << " and " <<  b << std::endl;
	return 0;
}
