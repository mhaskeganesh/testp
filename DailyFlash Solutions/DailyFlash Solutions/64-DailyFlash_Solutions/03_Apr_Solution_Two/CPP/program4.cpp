
#include <iostream>
#include <stdlib.h>
#include <string.h>

int main() {
	int n;
	std::cout << ("Enter Number : ");
	int k = 0;
	std::cin >> n;
	for(int i = 1; i <= n*2 - 1; i++){
		for(int j = n; j >= 1; j--){

			if(j <= i && i <= n){
				std::cout << (k+i-1)*(k+i-1) << "\t";
				k++;
			}
			else if(i > n && j <= n - (i-n)) {
				std::cout << (k+i-1)*(k+i-1) << "\t";
				k++;
			}
			else{
				std::cout << ("\t");
			}
		}
		std::cout << ("\n");
	}
}
