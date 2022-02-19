
#include <iostream>

int  main() {

	int n = 4, m = 4, k = 1;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	for(int i = 0; i < n; i++){
		k = 1;
		m = n - i + 1;
		for(int j = 0; j < n; j++){
			if(j < i){
				std::cout << (m++) << "\t";
			}
			else {
				std::cout << (k++) << "\t";
			}
		}
		std::cout << ("\n");
	}
}
