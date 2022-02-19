
#include <iostream>

int  main() {

	int n, k = 0;
	std::cout << ("Enter Number :");
	std::cin >> n;
	while(n!=0) {
		if(n % (n%10) == 0){
			std::cout << (n%10) << " ";
		}
		n = n/10;
	}
	std::cout << ("\n");
}
