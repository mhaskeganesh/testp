#include<stdio.h>

void main(){

	int n = 0;

	printf("Enter order of Matrix\n");
	scanf("%d",&n);

	int matrix[n][n];
	int matrix1[n][n];
	int matrix3[n][n];

	printf("Enter Elements for Matrix 1\n");
	for(int i=0;i<n;i++){

		printf("Enter array elemets for row %d : \n",i);
		for(int j=0;j<n;j++){

			scanf("%d",&matrix[i][j]);
		}
	}

	printf("Enter Elements for Matrix 2\n");
	for(int i=0;i<n;i++){

		printf("Enter array elemets for row %d : \n",i);
		for(int j=0;j<n;j++){

			scanf("%d",&matrix1[i][j]);
		}
	}

	for(int i=0;i<n;i++){
		for(int j=0;j<n;j++){

			matrix3[i][j] = matrix[i][j] + matrix1[i][j];
		}
	}

	printf("Third Matrix is \n");
	for(int i=0;i<n;i++){

		for(int j=0;j<n;j++){

			printf("%d\t",matrix3[i][j]);
		}
		printf("\n");
	}
}
