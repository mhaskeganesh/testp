
#include <iostream>

int main () {
	
	int n, k = 1;
	std::cout << ("Enter Size : ");
	std::cin >> n;

	for(int i = 1; i <= n; i++){
		for(int j = 1; j <= n ; j++){

			if(j <= n-i){
				std::cout << ("\t");
			}
			else{
				std::cout << (char)(64+k) << "\t";
				k++;
			}

		}
		k = 1;
		std::cout << ("\n");
	}	

}
