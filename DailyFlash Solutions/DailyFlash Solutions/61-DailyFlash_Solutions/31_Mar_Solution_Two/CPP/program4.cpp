
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main() {
	int n;
	std::cout << ("Enter Number : ");
	std::cin >> n;
	int k = 0;
	for(int i = 1; i <= n*2 - 1; i++){
		 k = 0;
		for(int j = n; j >= 1; j--){

			if(j <= i && i <= n){
				std::cout << i-1 << k << "\t";
			}
			else if(i > n && j <= n - (i-n)) {
				std::cout << i-1 << k << "\t";
			}
			else{
				std::cout << ("\t");
			}
			k++;
		}
		std::cout << ("\n");
	}
}
