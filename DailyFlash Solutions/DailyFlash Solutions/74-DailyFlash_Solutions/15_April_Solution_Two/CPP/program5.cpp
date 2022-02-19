
#include <iostream>

int main () {

	int m = 3,n = 3, flag = 0;
	std::cout << ("Row and Column : \n");
	std::cin >> m >> n;
	int matrix[m][n];
	int arr[m][n];
	int max = 0, sum = 0;
	std::cout << ("Enter Matrix 1 : \n");
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			std::cin >> matrix[i][j];
		}
	}
	std::cout << ("Enter Matrix 2 : \n");
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			std::cin >> arr[i][j];
		}
	}

	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			std::cout << (matrix[i][j] = (matrix[i][j] + arr[i][j])) << " ";
		}
		std::cout << ("\n");
	}
}

