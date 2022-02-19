#include<iostream>

int main(void) {
	std::cout << "Enter num : ";
	int num;
	std::cin >> num;
	if(!(num >= 200 && num <= 600))
		return -1;
	double sqrt = num / 2;
	double  temp = 0;
	while(sqrt != temp) {
		temp = sqrt;
		sqrt = (num / temp + temp) / 2;
	}
	std::cout << sqrt;
	return 0;
}
