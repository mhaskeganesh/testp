
#include <iostream>

int  main() {

	int n, k = 0;
	double sum = 0;
	std::cout << ("Enter Number :");
	std::cin >> n;
	while(n!=0) {
		sum = sum + (n%10);
		k++;
		n = n/10;
	}
	std::cout << "Average : " << sum/k << std::endl;
	std::cout << "Sum : " << sum << std::endl;
}
