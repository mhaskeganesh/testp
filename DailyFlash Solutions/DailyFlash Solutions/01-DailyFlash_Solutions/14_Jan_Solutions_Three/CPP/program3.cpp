
#include <iostream>
int main() {
	char c;

	printf("Enter Character  : ");
	scanf("%c", &c);
	
	if((c >= 65 && c <= 90) || (c >= 97 && c <= 122)){
		std::cout << c << (" is alphabet") << std::endl;
	}
	else if (c >= 48 && c <= 57){
		std::cout << c << (" is digit") << std::endl;
	}
	else{
		std::cout << c << (" is a Special Character") << std::endl;
	}
	return 0;
}
