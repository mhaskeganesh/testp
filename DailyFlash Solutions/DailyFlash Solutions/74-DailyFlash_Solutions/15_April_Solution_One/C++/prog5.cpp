#include<iostream>

int main() {
	int m;
	std::cout << "m: ";
	std::cin >> m;
	int arr1[m][m];
	int arr2[m][m];
	int arr[m][m];
	std::cout << "Enter arr1: ";
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			std::cin >> arr1[i][j];
		}
	}
	std::cout << "Enter arr2: ";
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			std::cin >> arr2[i][j];
			arr[i][j] = arr1[i][j] + arr2[i][j];
		}
	}	
	
	std::cout << "arr: ";
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			std::cout << arr[i][j];
		}
		std::cout << "\n";
	}	

	
	
}
