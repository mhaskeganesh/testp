
#include <iostream>

int main() {
	char c;

	std::cout << ("Enter Character  : ") << std::endl;
	std::cin >> c;
	
	if(c >= 65 && c <= 90) {
		std::cout << c << (" is in UpperCase ") << std::endl;
	}
	
	else if(c >= 97 && c <= 122){
		std::cout << c << (" is in LowerCase ") << std::endl;
	}
	else{
		std::cout << c << (" is not alphabet") << std::endl;
	}
	return 0;
}
