#include<iostream>

int main() {
	int num, sum = 0;
	std::cout << "Input : ";
	std::cin >> num;
	for(int i = 1; i <= num; i++) {
		sum += i;
	}
	std::cout << "Sum : "<< sum;
	return 0;
}
