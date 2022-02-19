
#include <iostream>

int main () {
	
	int n, k = 97;
	std::cout << ("Enter Size : ");
	std::cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = 0; j <= n-i ; j++){
			std::cout << (char)(k + j) << "\t";
		}
		k = k + 2;
		std::cout << ("\n");
	}	

}
