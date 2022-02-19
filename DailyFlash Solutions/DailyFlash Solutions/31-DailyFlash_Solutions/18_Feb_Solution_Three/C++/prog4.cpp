#include<iostream>

int main() {
	int n;
	std::cout << "Enter num : ";
	std::cin >> n;
	for(int i = 0; i < n; i++) {
		for(int j = 0; j < n; j++) {
			if(j >= i) {
				std::cout << j * j + (i * j) << "\t";
			} else {
				std::cout << ("\t");
			}
		}
		std::cout << "\n";
	}
	return 0;
}
