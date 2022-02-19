
#include <iostream>

int main() {

	int n, k = 0;
	std::cout << ("Enter Number : \n");
	std::cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 1; j <= n*2-1; j++){
			if(j >= (n*2)/2 - i && j <= (n*2)/2 + i){
				std::cout << ("*\t");
			}
			else{
				std::cout << ("\t");
			}
		}
		std::cout << ("\n");
	}
}
