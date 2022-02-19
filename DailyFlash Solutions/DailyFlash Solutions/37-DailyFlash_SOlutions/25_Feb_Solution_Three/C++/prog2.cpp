#include<iostream>

int main() {
	int num1, num2;
	std::cout << "Enter num1: ";
	std::cin >> num1;
	std::cout << "Enter num2: ";
	std::cin >> num2;
	double temp, sqrt;
	for(int i = num1; i <= num2; i++) {
		temp = 0;
		sqrt = i / 2;
		while(sqrt != temp) {
			temp = sqrt;
			sqrt = (i / temp + temp) / 2;
		}
		std::cout << sqrt << " ";
	}
	return 0;
}
