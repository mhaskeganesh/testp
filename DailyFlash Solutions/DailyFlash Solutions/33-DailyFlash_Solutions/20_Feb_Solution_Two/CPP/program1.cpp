
#include <iostream>
#include <math.h>

int main() {

	float a,r;
	std::cout << ("Enter angle in degree and radius\n");
	std::cin >> a >> r;
	a = 3.142 * (a / 180);

	std::cout << ("x : ") << r * cos(a) << std::endl;
	std::cout << ("y : ") <<  r * sin(a) << std::endl;
}
