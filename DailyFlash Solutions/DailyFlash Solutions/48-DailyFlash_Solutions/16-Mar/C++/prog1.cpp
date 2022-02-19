#include<iostream>
#include<math.h>


int isPrime(int num) {
	int cnt = 0;
	if(num <= 1) {
		return 0;
	}
	for(int i = 2; i <= sqrt(num); i++) {
		if(num % i == 0)
			return 0;
	}
	return 1;
}

int main() {
	int num;
	std::cout << "Enter num : ";
	std::cin >> num;
	for(int i = 1; i <= sqrt(num); i++) {
		if(num % i == 0) {
			if(isPrime(i)) {
				std::cout << i << " ";
			}
			if(isPrime(num / i) && i != num / i) {
				std::cout << num / i << " ";
			}
		}
	}
}
