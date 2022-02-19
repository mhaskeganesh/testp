#include<iostream>
#include<math.h>

int main() {
	float x1, x2, y1, y2;
	std::cout << "Enter x1 : ";
	std::cin >> x1;
	std::cout << "Enter y1 : ";
	std::cin >> y1;
	std::cout << "Enter x2 : ";
	std::cin >> x2;
	std::cout << "Enter y2 : ";
	std::cin >> y2;
	std::cout << "Dist : " <<sqrt((y2 - y1) * (y2 - y1) + (x2 - x1) * (x2 - x1));
}
