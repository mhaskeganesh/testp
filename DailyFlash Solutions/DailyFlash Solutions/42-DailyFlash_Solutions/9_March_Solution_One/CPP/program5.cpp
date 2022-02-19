
#include <iostream>

int main() {

	int n;
	std::cout << ("Enter Number : \n");
	while(1){
		std::cin >> n;
		if(n%7 == 0) {
			std::cout << ("You entererd Number divisible by 7\n");
			break;
		}
	}
}
