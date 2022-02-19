#include<iostream>

void swap(int *a, int *b) {
	int temp = *a;
	*a = *b;
	*b = temp;
}

int main() {
	int n = 0;
	std::cin >> n;
	int arr[n];
	int arr1[n];
	int arr2[n];
	std::cout << "Enter array 1:";
	for(int i = 0; i < n; i++) {
		std::cin >> arr1[i];
	}
	std::cout << "Enter array 2:";
	for(int i = 0; i < n; i++) {
		std::cin >> arr2[i];
		arr[i] = arr1[i] * arr2[i];
	}
	std::cout << "Array 3:";
	for(int i = 0; i < n; i++) {
		std::cout << arr[i];
	}
}
