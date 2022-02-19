
#include <iostream>

int main() {

	int n;
	std::cout << ("Enter Number : \n");
	while(1){
		std::cin >> n;
		if(n < 0) {
			std::cout << ("negative Number\n");
			break;
		}
		std::cout << ("Square of ") << n << " : " << (n*n) << std::endl;
	}
}
