
#include <iostream>

int  main() {
	int n, temp, i = 0;
	std::cout << ("Enter Number :");
	std::cin >> n;
	temp = n;
	while(n!=0) {
		std::cout << temp << "/" << n%10 << " = " << temp/(n%10) << "\n";
		n = n/10;
	}
}
