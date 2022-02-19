
#include <iostream>

int main () {

	int n, flag = 0;
	std::cout << ("Enter ft : ");
	std::cin >> n;

	if(n < 0)
		exit(0);
	std::cout << ("Equivalent distance for ") << n << (" ft in cm is ") << n * 30 << ("cm\n");;
}
