#include<iostream>
#include<math.h>
int main() {
	long bin;
	int rem, dec = 0, i = 0;
	std::cout << "Enter binary : ";
	std::cin >> bin;
	while(bin != 0) {
		rem = bin % 10;
		if(!(rem == 0 || rem == 1)) {
			std::cout << "Enter valid bin.";
			exit(1);
		}
		dec = dec + rem * pow(2, i);
		bin /= 10;
		i++;
	}
	std::cout << "Decimal : " << dec;
	return 0;
}
