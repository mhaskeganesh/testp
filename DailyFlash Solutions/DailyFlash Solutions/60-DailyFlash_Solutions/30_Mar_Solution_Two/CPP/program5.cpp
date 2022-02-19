
#include <iostream>
#include <math.h>

int main () {

	float len;
	std::cout << ("Enter length in metre\n");
	std::cin >> len;

	std::cout << ("Period of that pendulum is :") << (2*3.142)/sqrt(len/9.81) << "seconds\n";
	
	return 0;
}
