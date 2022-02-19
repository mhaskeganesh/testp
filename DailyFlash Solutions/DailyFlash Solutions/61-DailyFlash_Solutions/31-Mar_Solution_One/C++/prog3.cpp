#include<iostream>

int main() {
	int n;
	std::cin >>n;
	int arr[n];
	int mul = 1;
	for(int i = 0; i < n; i++) {
		std::cin >> arr[i];
		if(arr[i] % 2 == 1)
			arr[i] = arr[i] * arr[i] * arr[i];
		else
			arr[i] = arr[i] * arr[i];
	}
	for(int i = 0; i < n; i++) {
		std::cout << arr[i] << " ";
	}

}
