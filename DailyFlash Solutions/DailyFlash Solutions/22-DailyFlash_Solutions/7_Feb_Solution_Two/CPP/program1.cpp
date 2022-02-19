
#include <iostream>

int main() {

	int n;
	std::cout << ("Enter Number : ");
	std::cin >> n;

	for(int i = 2; i<=n/2; i++){
		if(n%i == 0){
			std::cout << ("Number is not prime\n");
			return 0;
		}
	}
	std::cout << ("Number is prime\n");
}
