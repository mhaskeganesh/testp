
#include <iostream>

int  main() {

	int n, k = 0, a, d;
	std::cout << ("Starting element :");
	std::cin >> a;
	std::cout << ("Number of element :");
	std::cin >> n;
	std::cout << ("Common difference :");
	std::cin >> d;
	std::cout << ("The sum is : " ) << (n/2)*(2*a + (n-1)*d) << std::endl;
}
