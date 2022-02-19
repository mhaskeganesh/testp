#include<stdio.h>

void main(){

	int n;

	printf("Enter the size of array : ");
	scanf("%d",&n);

	int arr1[n];
	int arr2[n];
	int arr3[n];

	printf("Enter Array 1 Elements\n");
	for(int i=0; i<n; i++)
		scanf("%d",&arr1[i]);

	printf("Enter Array 2 Elements\n");
	for(int i=0; i<n; i++)
		scanf("%d",&arr2[i]);

	printf("After Operation Elements in Third Array are\n");
	for(int i=0; i<n; i++){
		arr3[i] = arr1[i]*arr2[i];
		printf("At index %d = %d\n",i,arr3[i]);
	}

}
