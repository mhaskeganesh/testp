#include<iostream>

int main() {
	int num;
	std::cout << "Enter num : ";
	std::cin >> num;
	int sqrt = num / 2;
	int temp = 0;
	while(sqrt != temp) {
		temp = sqrt;
		sqrt = (num / temp + temp) / 2;
	}
	std::cout << "Sqrt of " << num << " is " << sqrt;
	return 0;
}
