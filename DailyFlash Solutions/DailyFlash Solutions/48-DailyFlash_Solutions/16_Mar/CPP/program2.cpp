
#include <iostream>

int main () {
	int n;

	std::cout << ("Enter Number : ");
	std::cin >> n;

	int max,rev = 0;
	std::cout << ("Enter Digit to replace 1 : ");
	std::cin >> max;
	while(n != 0){
		rev = rev * 10 + n % 10;
		n /= 10;
	}
	while(rev != 0){
		if(rev % 10 == 1)
			n = n * 10 + max;
		else
			n = n * 10 + rev % 10;
		rev /= 10;

	}
	std::cout << (n) << std::endl;
}
