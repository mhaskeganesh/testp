#include<iostream>
#include<math.h>
int main() {
	int num, sum = 0;
	std::cout << "Enter num : ";
	std::cin >> num;
	for(int i = 1; i <= sqrt(num); i++) {
		if(num % i == 0) {
			if(num / i == i) {
				std::cout << i << " ";
				sum += i;
			} else {
				std::cout << i << " " << num / i << " "; 
				sum += i;
				sum += num / i;
			}
		}
	}

	std::cout << "\nsum : " << sum;
	return 0;
}
