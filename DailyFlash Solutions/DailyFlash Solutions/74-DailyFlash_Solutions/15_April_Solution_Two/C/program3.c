
#include <stdio.h>

void main () {

	int m = 3,n = 3, sum;
	printf("Row and Column : \n");
	scanf("%d%d", &m,&n);
	int matrix[m][n];
	int arr[m][n];
	printf("Enter Matrix 1 : \n");
	for(int i = 0 ; i < m ; i++){
		for(int j = 0 ; j < n ; j++){
			scanf("%d", (*(matrix+i)+j));
		}
	}
	printf("Sum of All rows : ");
	for(int i = 0 ; i < m ; i++){
		sum = 0;
		for(int j = 0 ; j < n ; j++){
			sum += matrix[i][j];
		}
		printf("%d ",sum);
	}
	printf("\nSum of All Columns : ");
	for(int i = 0 ; i < n ; i++){
		sum = 0;
		for(int j = 0 ; j < m ; j++){
			sum += matrix[j][i];
		}
		printf("%d ",sum);
	}
	printf("\n");

}

