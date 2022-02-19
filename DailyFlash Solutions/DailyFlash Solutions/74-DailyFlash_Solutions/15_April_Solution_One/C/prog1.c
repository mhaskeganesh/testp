#include<stdio.h>
#include<stdlib.h>
int comp(const void *a, const void *b) {
	return *(int *)b - *(int *)a;
}

int main() {
	int l;
	printf("Enter len: ");
	scanf("%d", &l);
	int arr1[l];
	int arr2[l];
	int arr[l+l];
	printf("Enter array 1 :");
	for(int i = 0; i < l; i++) {
		scanf("%d", &arr1[i]);
		arr[i] = arr1[i];
	}
	printf("Enter array 2 :");
	for(int i = 0; i < l; i++) {
		scanf("%d", &arr2[i]);
		arr[l+i] = arr2[i];
	}

	printf("Conc sorted array: ");
	qsort(arr, 2 * l, sizeof(int), comp);
	for(int i = 0; i < 2*l; i++) {
		printf("%d ", arr[i]);
	}

}
