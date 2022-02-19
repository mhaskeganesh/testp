#include<iostream>

int main() {
	float unit;
	std::cout << "Units : ";
	std::cin >> unit;
	if(unit >= 0) {
		if(unit <= 50) {
			std::cout << unit * 0.50;
		} else if(unit > 50 && unit <= 100) {	
			std::cout << unit * 0.75;
		} else if(unit > 100 && unit <= 250) {
			std::cout << unit * 1.20;	
		} else {
			std::cout << unit * 1.50;
		}		
	} else {
		std::cout << "Enter valid input.";
	}
	return 0;
}
