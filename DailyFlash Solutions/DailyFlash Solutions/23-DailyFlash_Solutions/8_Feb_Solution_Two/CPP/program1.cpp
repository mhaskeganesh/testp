
#include <iostream>

int main () {
	int n, sum = 0;
	std::cout << ("Enter Number: ");
	std::cin >> n;
	for(int i = 1; i <= n/2; i++){
		if(n % i == 0){
			sum = sum + i;
		}
	}
	if(sum > n){
		std::cout << ("Number is Abundant\n");
	}
	else
		std::cout << ("Number is Not Abundant\n");
}
