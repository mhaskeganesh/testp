#include<iostream>

int main() {
	int m;
	std::cout << "m: ";
	std::cin >> m;
	int arr[m][m];
	std::cout << "Enter arr: ";
	int sumr = 0;
	for(int i = 0; i < m; i++) {
		sumr = 0;
		for(int j = 0; j < m; j++) {
			std::cin >> arr[i][j];
			sumr += arr[i][j];	
		}
		std::cout << sumr;
	}	
	std::cout << "\n";
	for(int i = 0; i < m; i++) {
		sumr = 0;
		for(int j = 0; j < m; j++) {
			sumr+=arr[j][i];
		
		}
		std::cout << sumr << " ";
	}	
	
}
