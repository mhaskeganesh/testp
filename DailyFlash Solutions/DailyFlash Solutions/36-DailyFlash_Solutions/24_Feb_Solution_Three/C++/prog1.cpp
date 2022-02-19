#include<iostream>

int main() {
	int num, sum, n;
	std::cout << "Enter num : ";
	std::cin >> n;
	for(int i = 1; i <= n; i++) {
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
