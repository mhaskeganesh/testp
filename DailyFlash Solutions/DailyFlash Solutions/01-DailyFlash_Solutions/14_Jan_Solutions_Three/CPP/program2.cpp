
#include <iostream>

int main() {
	char c;

	std::cout << ("Enter Character  : ") << std::endl;
	std::cin >> (c);
	
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
		if(c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U' ||
				c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u'){
			std::cout << c << (" is Vowel") << std::endl;
		}
		else {
			std::cout << c << (" is Consonant") << std::endl;
		}
	}
	else {
		std::cout << c << (" is not alphabet") << std::endl;
	}
}
