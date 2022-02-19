
#include <iostream>

int main () {
	
	int n;
	std::cout << ("Enter Size : ");
	std::cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n ; j++){
			if(j == i){
				std::cout << ("=\t");
			}
			else{
				std::cout << ((j)) << "\t";
			}
		}
		std::cout << ("\n");
	}	

}
