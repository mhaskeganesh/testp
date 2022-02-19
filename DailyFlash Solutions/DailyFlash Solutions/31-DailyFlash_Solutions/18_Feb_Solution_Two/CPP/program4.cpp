
#include <iostream>

int main() {

	int n;
	std::cout <<("Enter Radius :");
	std::cin >> n;
	for(int i = 0; i < n; i++){
		for(int j = 0; j < n; j++){
			if(j < i){
				std::cout << ("\t");
			}
			else{
				std::cout << (i+j)*j;
			}
		}
		std::cout << ("\n");
	}
}
