
#include <iostream>

int main() {

	int n;
	std::cout << ("Enter Number : \n");
	std::cin >> n;
	while(n != 0){
		if(n%10 == 0) {
			std::cout << ("Numbers is Duck\n");
			return 0;
		}
		n = n / 10;
	}
	std::cout << ("Number is not Duck Number\n");
}
