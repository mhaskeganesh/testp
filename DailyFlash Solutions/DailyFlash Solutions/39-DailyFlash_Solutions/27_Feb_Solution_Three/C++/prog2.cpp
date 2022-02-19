#include<iostream>
#include<math.h>
int main() {
	double a;
	std::cout << "Enter area: ";
	std::cin >> a;
	if(a >= 0) {
		std::cout << "Rad : " << sqrt(a/(3.14));
	}
}
