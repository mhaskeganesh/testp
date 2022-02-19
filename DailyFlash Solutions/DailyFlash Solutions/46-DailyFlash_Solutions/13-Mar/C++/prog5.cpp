#include<iostream>
#include<math.h>

int main() {
	float x1, x2, y1, y2, x3, y3;
	std::cout << "(A)Enter x1 : ";
	std::cin >> x1;
	std::cout << "(A)Enter y1 : ";
	std::cin >> y1;
	std::cout << "(B)Enter x2 : ";
	std::cin >> x2;
	std::cout << "(B)Enter y2 : ";
	std::cin >> y2;
	std::cout << "(C)Enter x3 : ";
	std::cin >> x3;
	std::cout << "(C)Enter y3 : ";
	std::cin >> y3;
	std::cout << "Semiperimeter : " << (sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1)) + sqrt((y2 - y3) * (y2 - y3) + (x2 - x3) * (x2 - x3)) + sqrt((y3 - y1) * (y3 - y1) + (x3 - x1) * (x3 - x1))) / 2;
}
