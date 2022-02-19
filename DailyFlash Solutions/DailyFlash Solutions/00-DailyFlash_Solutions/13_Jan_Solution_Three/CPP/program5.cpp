
#include <iostream>

main() {

	int a;
	std::cout << ("Enter Number : \n");
	std::cin >> (a);

	std::cout << ((a % 5 == 0 && a % 11 == 0)? "Number is divisible by 5 & 11": "Number is not divisible by 5 & 11") << std::endl;

	return 0;
}
