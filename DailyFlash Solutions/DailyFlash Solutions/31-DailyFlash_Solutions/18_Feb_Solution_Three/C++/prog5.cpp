#include<iostream>

int main() {
	int num;
	std::cout << "Enter num : ";
	std::cin >> num;
	int temp = num;
	std::cout << "Perfect divisors : ";
	while(num != 0) {
		if(temp % (num % 10) == 0) {
			std::cout << num % 10 << " ";
		}
		num /= 10;
	}
	return 0;
}
