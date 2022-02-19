
#include <iostream>

int  main() {

	int a, d;
	std::cout << ("Ending element :");
	std::cin >> a;
	std::cout << ("Common difference :");
	std::cin >> d;
	while(a>0) {
		std::cout << (a) << " ";
		a = a - d;
	}
	std::cout << ("\n");
}
