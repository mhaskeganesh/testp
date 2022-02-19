
#include <iostream>

int main () {
	
	int n,k = 1;
	std::cout << ("Enter Size : ");
	std::cin >> n;

	for(int i = 1; i <= n; i++){
		k = 1;
		for(int j = 1; j <= n ; j++){

			if(j <= (n-i)){
				std::cout << ("\t");
			}
			else if(j == (n-i+1)){
				std::cout << ("=\t");
			}
			else{
				std::cout << (k) << "\t";
				k++;
			}

		}
		std::cout << ("\n");
	}	

}
