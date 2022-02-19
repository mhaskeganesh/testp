#include<stdio.h>

int main() {
	int m;
	printf("m: ");
	scanf("%d", &m);
	int arr1[m][m];
	int arr2[m][m];
	int arr[m][m];
	printf("Enter arr1: ");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d", &arr1[i][j]);
		}
	}
	printf("Enter arr2: ");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			scanf("%d", &arr2[i][j]);
			arr[i][j] = arr1[i][j] + arr2[i][j];
		}
	}	
	
	printf("arr: ");
	for(int i = 0; i < m; i++) {
		for(int j = 0; j < m; j++) {
			printf("%d", arr[i][j]);
		}
		printf("\n");
	}	

	
	
}
