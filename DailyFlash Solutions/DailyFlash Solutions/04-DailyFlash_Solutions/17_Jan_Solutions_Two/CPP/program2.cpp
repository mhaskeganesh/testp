
#include <iostream>

int main () {
	
	int u;
	std::cout << ("Enter Number of Units : ");
	std::cin >> u;

	if(u >= 0 && u <= 50)
		std::cout << ("Electricity Bill : " ) <<  0.50 * u << std::endl;
	else if(u > 50 && u <= 150)
		std::cout << ("Electricity Bill : ") << 0.75 * u << std::endl;
	else if(u > 150 && u <= 250)
		std::cout << ("Electricity Bill : ") << 1.20 * u << std::endl;
	else if(u > 250)
		std::cout << ("Electricity Bill : ") << 1.50 * u << std::endl;
	else
		std::cout << ("Units can't be negative") << std::endl;
	return 0;
}
