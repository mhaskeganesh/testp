#include<iostream>

int main() {
	float c;
	std::cout << "Enter circum : ";
	std::cin >> c;
	if(c >= 0)
		std::cout << "Dia : " << c / 3.142;
}
