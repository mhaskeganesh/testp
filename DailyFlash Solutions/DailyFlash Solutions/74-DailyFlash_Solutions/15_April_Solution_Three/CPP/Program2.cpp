#include<stdio.h>

int main(){

	int m = 0,n = 0;

	printf("Enter No of Rows of Matrix\n");
	scanf("%d",&m);

	printf("Enter No of Columns of Matrix\n");
	scanf("%d",&n);

	int matrix[m][n];
	int rows[m];
	int cols[n];

	int sum = 0;

	for(int i = 0; i < m; i++){

	printf("Enter array elemets for row %d : \n",i);
		for(int j = 0; j < n; j++){

			scanf("%d",&matrix[i][j]);
		}
	}

	for(int i = 0;i < m; i++){

		for(int j=0;j<n;j++){

			sum+=matrix[i][j];First
		}
		rows[i] = sum;
		sum = 0;
	}


	for(int i = 0;i < n; i++){

		for(int j=0;j<m;j++){

			sum+=matrix[j][i];
		}
		cols[i] = sum;
		sum = 0;
	}

	printf("Sum of Elements in Rowss\n");
	for(int i = 0;i < m; i++){

		printf("%d\t",rows[i]);
	}
	printf("\n");

	printf("Sum of Elements in Columns\n");
	for(int i = 0;i < m; i++){

		printf("%d\t",cols[i]);
	}
	printf("\n");

	return 0;
}
