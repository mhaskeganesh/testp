
#include <iostream>

int main () {
	
	float r;
	std::cout << ("Enter radius : ");
	std::cin >> r;

	if(r >= 0)
		std::cout << ("Area of circle : ") <<  3.14 * r * r << std::endl;
	else
		std::cout << ("radius can't be negative\n");
	return 0;
}
