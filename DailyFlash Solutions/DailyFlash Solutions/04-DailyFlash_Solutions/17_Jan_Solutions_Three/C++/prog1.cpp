#include<iostream>

int main() {
	float r;
	std::cout << "Radius : ";
	std::cin >> r;
	r >= 0 ? std::cout << "Area : " << 3.14*r*r : std::cout << "Enter valid redius.";
	return 0;
}
