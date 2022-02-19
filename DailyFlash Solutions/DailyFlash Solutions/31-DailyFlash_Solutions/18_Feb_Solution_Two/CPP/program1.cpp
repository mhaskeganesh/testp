
#include <iostream>

int  main() {

	int n, k = 0, a, d;
	std::cout << ("Starting element :");
	std::cin >> a;
	std::cout << ("Number of element :");
	std::cin >> n;
	std::cout << ("Common difference :");
	std::cin >> d;
	std::cout << ("The AP is : ");
	while(k < n) {
		std::cout << (a + k * d) << " ";
		k++;
	}
	std::cout << ("\n");
}
