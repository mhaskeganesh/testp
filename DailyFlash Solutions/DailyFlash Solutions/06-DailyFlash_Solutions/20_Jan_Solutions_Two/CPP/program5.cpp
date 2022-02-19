
#include <iostream>

int main () {
	
	int n,k;
	std::cout << ("Enter Size : ");
	std::cin >> n;

	if(n< 0)
		exit(0);

	for(int i = 1; i <= n; i++){
		k = i % 2 == 0 ? 1 : 0;

		for(int j = 1; j <= n; j++){
			std::cout << (k) << " ";	
		}	
		std::cout << ("\n");
	}
	return 0;
	
}
