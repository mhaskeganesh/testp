
#include <iostream>

main() {

	int a, b, c;
	std::cout << ("Enter three Numbers :") << std::endl;
	std::cin >> a >> b >> c;
	
	if(a > b){
		if(a > c){
			std::cout << a << (" is greater") << std::endl;
		}
		else {
			std::cout << c << (" is greater") << std::endl;
		}
	}
	else if (b > c){
		std::cout << b << (" is greater") << std::endl;
	}
	else{
		std::cout << c << (" is greater") << std::endl;
	}
	
	return 0;

}
