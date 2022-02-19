
#include <iostream>

int main () {

	int n, sum = 0;
	std::cout << ("Enter Number : ");
	std::cin >> n;

	if(n < 0)
		exit(0);
	for(int i = 1; i <= n/2; i++){
		
		if(n % i == 0)
			sum = sum + i;
	}
	std::cout << (sum) << std::endl;
}
