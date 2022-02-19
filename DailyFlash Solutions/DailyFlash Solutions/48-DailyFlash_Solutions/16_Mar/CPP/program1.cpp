
#include <iostream>
int isPrime(int n) {

	for(int i = 2; i <= n/2; i++){
		if(n%i == 0)
			return 0;
	}	
	return 1;
}
int main () {
	int n;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	std::cout << ("Prima Factors are : ");
	for(int i = 2; i<= n/2; i++){
		if(n%i == 0)
			if(isPrime(i)){
				std::cout << (i) << " ";	
			}
	}
	std::cout << ("\n");
}
