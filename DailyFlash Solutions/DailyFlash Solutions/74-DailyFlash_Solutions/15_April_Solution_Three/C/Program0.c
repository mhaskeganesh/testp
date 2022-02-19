#include<stdio.h>

void main(){

	int n = 0;

	printf("Enter Number of Elements : ");
	scanf("%d",&n);

	int arr1[n];
	int arr2[n];
	int arr3[2*n];

	printf("Enter For array 1\n");
	for(int i=0; i<n; i++){

		scanf("%d",&arr1[i]);
	}

	printf("Enter For array 2\n");
	for(int i=0; i<n; i++){

		scanf("%d",&arr2[i]);
	}

	for(int i = 0; i < n; i++){

		arr3[i] = arr1[i];
		arr3[n+i] = arr2[i];
	}

	printf("After Concatenation Third array is\n");
	for(int i=0; i<2*n; i++){

		printf("%d\t",arr3[i]);

	}
	printf("\n");

	for(int i=0; i<2*n; i++){
		for(int j=0; j<2*n; j++){
		
			if(arr3[j] < arr3[i]){

				int temp = arr3[i];
				arr3[i] = arr3[j];
				arr3[j] = temp;
			}
		}
	}

	printf("After Concatenation and Sorting Third array is\n");
	for(int i=0; i<2*n; i++){

		printf("%d\t",arr3[i]);

	}
	printf("\n");

}
