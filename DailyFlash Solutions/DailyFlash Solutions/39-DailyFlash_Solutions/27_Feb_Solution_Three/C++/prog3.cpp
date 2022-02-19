#include<iostream>
int main() {
	int num, max = 0, max2 = 0, count = 0;
	std::cout << "Enter num: ";
	std::cin >> num;
	int temp = num;
	while(num != 0) {
		if(num % 10 >= max) {
			max = num % 10;
		}
		num /= 10;
	}
	while(temp != 0) {
		if(max == temp % 10) {
			count++;
			temp /= 10;
			continue;
		}
		if(count > 1) {

			return 1;
		}
		if(temp % 10 >= max2) {
			max2 = temp % 10;
		}
		temp /= 10;

	}
  	if(count > 1) {
		std::cout << "Sec max = " << max;
	} else {
		std::cout << "Sec max = " << max2;
	}
}
