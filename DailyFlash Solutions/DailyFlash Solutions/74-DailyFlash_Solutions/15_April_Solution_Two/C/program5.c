
#include <stdio.h>

void main () {

	int m = 3,n = 3, flag = 0;
	printf("Row and Column : \n");
	scanf("%d%d", &m,&n);
	int matrix[m][n];
	int arr[m][n];
	int max = 0, sum = 0;
	printf("Enter Matrix 1 : \n");
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d", (*(matrix+i)+j));
		}
	}
	printf("Enter Matrix 2 : \n");
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d", (*(arr+i)+j));
		}
	}

	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			printf("%d ", matrix[i][j] = (matrix[i][j] + arr[i][j]));
		}
		printf("\n");
	}
}

