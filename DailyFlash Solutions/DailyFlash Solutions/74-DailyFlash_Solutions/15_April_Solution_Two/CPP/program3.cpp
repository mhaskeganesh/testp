
#include <iostream>

int main () {

	int m = 3,n = 3, sum;
	std::cout << ("Row and Column : \n");
	std::cin >> m >> n;
	int matrix[m][n];
	int arr[m][n];
	std::cout << ("Enter Matrix 1 : \n");
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){		
			std::cin >> matrix[i][j];
		}
	}
	std::cout << ("Sum of All rows : ");
	for(int i = 0 ; i < m ; i++){
		sum = 0;
		for(int j = 0 ; j < n ; j++){
			sum += matrix[i][j];
		}
		std::cout << (sum) << " ";
	}
	std::cout << ("\nSum of All Columns : ");
	for(int i = 0 ; i < n ; i++){
		sum = 0;
		for(int j = 0 ; j < m ; j++){
			sum += matrix[j][i];
		}
		std::cout << (sum) << " ";
	}
	std::cout << ("\n");

}

