
#include <iostream>
#include <math.h>

int main() {

	float theta, phi,r;
	std::cout << ("Enter theta , phi and radius\n");
	std::cin >> theta >> phi >> r;
	theta = 3.142 * (theta / 180);
	phi = 3.142 * (phi / 180);

	std::cout << ("x : ") << r * sin(theta) * cos(phi) << std::endl;
	std::cout << ("y : ") << r * sin(phi) * sin(theta) << std::endl;
	std::cout << ("z : ") << r * cos(theta) << std::endl;
}
