#include<stdio.h>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int n = 0;
	scanf("%d",  &n);
	int arr[n];
	int arr1[n];
	int arr2[n];
	printf("Enter array 1:");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr1[i]);
	}
	printf("Enter array 2:");
	for(int i = 0; i < n; i++) {
		scanf("%d", &arr2[i]);
		arr[i] = arr1[i] * arr2[i];
	}
	printf("Array 3:");
	for(int i = 0; i < n; i++) {
		printf("%d ", arr[i]);
	}
}
