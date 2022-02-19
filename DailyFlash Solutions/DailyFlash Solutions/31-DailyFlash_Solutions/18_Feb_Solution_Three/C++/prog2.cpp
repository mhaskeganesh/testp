#include<iostream>

int main() {
	double num;
	std::cout << "Enter num : ";
	std::cin >> num;
	int temp = num, rem, i = 0; 
	double sum = 0;
	while(temp > 0) {
		rem = temp % 10;
		sum += rem;
		temp /= 10;
		i++;
	}
	std::cout << "sum : " << sum <<"\nAvg : " << (sum / i);

	return 0;
}
