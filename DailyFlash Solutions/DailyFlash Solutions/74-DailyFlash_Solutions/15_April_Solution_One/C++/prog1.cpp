#include<iostream>
#include<stdlib.h>
int comp(const void *a, const void *b) {
	return *(int *)b - *(int *)a;
}

int main() {
	int l;
	std::cout << "Enter len: ";
	std::cin >> l;
	int arr1[l];
	int arr2[l];
	int arr[l+l];
	std::cout << "Enter array 1 :";
	for(int i = 0; i < l; i++) {
		std::cin >> arr1[i];
		arr[i] = arr1[i];
	}
	std::cout << "Enter array 2 :";
	for(int i = 0; i < l; i++) {
		std::cin >> arr2[i];
		arr[l+i] = arr2[i];
	}

	std::cout << "Conc sorted array: ";
	qsort(arr, 2 * l, sizeof(int), comp);
	for(int i = 0; i < 2*l; i++) {
		std::cout << arr[i] << " ";
	}

}
