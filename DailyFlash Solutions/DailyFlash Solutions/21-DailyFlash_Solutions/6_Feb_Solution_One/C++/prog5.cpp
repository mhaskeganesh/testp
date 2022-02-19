#include<iostream>

int main() {
	int arr[5];
	for(int i = 0; i < 5; i++) {
		std::cin >> arr[i];
		if(i > 0) {
			if(arr[i - 1] > arr[i])
				break;
		}
	}
	return 0;
}
