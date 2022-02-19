#include<iostream>
#include<math.h>
int main(void) {
	float x1, x2, y1, y2, x3, y3, s, ab, bc, ca;
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
	s = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1)) + sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3)) + sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1)) / 2;
	ab = sqrt((x2 - x1) * (x2 - x1) + (y2 - y1) * (y2 - y1));
	bc = sqrt((x2 - x3) * (x2 - x3) + (y2 - y3) * (y2 - y3));
	ca = sqrt((x3 - x1) * (x3 - x1) + (y3 - y1) * (y3 - y1));
	std::cout << "R = " << sqrt(s * (s - ab) * (s - bc) * (s - ca)) / s;
}
