#include<iostream>

int main() {
	int num, sum, n, lb, ub;
	std::cout << "Enter lb: ";
	std::cin >> lb;
	std::cout << "Enter ub: ";
	std::cin >> ub;
	for(int i = lb; i <= ub; i++) {
		num = i;
		sum = 0;
		while(num != 0) {
			sum = sum + num % 10;
			num /= 10;
		}
		if(i % sum == 0) {
		       std::cout << i << " ";
		} 
	}
}
