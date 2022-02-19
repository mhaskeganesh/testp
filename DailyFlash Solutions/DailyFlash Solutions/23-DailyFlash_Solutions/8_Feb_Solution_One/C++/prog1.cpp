#include<iostream>

int main() {
	int num;
	std::cout << "Enter num : ";
	std::cin >> num;
	int sum = 0;
	for(int i = 1; i * i <= num; i++) {
		if(num % i == 0) {
			sum += i;
		}
		if(num / i != i && num % (num / i) == 0) {
			if(i == 1)
				continue;	
			sum += num / i;
		}
	}
	std::cout << "sum = " << sum;
	if(sum > num) 
		std::cout << "\nAbundant num.";
	else 
		std::cout << "\nNot Abundant num.";
}
