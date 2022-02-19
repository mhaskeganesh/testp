
#include <iostream>

int main() {
	
	int k;
	std::cout << ("Enter Number : ");
	std::cin >> k;

	if(k % 2 == 0)
		std::cout << ("Even Number\n");
	else
		std::cout << ("Odd Number\n");
	return 0;
}
