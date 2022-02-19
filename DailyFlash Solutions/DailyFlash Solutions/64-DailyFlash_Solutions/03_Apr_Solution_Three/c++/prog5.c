#include<iostream>
#include<math.h>



int main() {
	float F;
	std::cout << "F : ";
	std::cin >> F;
	std::cout << "L = " << (4 * 3.14 * 3.14 * F * F) / 9.81;
}
