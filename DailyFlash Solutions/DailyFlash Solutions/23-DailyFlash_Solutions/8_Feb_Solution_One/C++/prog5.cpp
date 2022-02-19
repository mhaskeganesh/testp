#include<iostream>

int main() {
	int n;
	std::cout << "Enter size : ";
	std::cin >> n;
	int arr[n];
	printf("Enter elements of an array : ");
	for(int i = 0; i < n; i++) {
		std::cin >> arr[i];
	}
	printf("Elements of an array in rev : ");
	for(int i = 0; i < n; i++) {
		std::cout << arr[n - i - 1] << " ";
	}	
}
