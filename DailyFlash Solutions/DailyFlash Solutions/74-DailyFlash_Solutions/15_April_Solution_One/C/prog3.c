#include<stdio.h>

int main() {
	int m;
	printf("m: ");
	scanf("%d", &m);
	int arr[m][m];
	printf("Enter arr: ");
	int sumr = 0;
	for(int i = 0; i < m; i++) {
		sumr = 0;
		for(int j = 0; j < m; j++) {
			scanf("%d", &arr[i][j]);
			sumr += arr[i][j];	
		}
		printf("%d ", sumr);
	}	
	printf("\n");
	for(int i = 0; i < m; i++) {
		sumr = 0;
		for(int j = 0; j < m; j++) {
			sumr+=arr[j][i];
		
		}
		printf("%d ", sumr);
	}	
	
}
