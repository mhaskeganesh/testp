
#include <iostream>

int main() {
	char c;

	std::cout << ("Enter Character  : ") << std::endl;
	std::cin >> c;
	
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
		std::cout << c << (" is alphabet") << std::endl;
	}
	else{
		std::cout << c << (" is not alphabet ") << std::endl;
	}
}
