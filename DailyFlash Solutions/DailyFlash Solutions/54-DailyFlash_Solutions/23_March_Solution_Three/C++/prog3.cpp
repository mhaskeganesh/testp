#include<iostream>

int main() {
	int num;
	std::cin >>num;
	int temp = num, n = 0;
	while(temp != 0) {
		n++;
		temp /= 10;
	}
	int arr[n];
	int i = 0;
	while(num != 0) {
		arr[i] = num % 10;
		num /= 10;
		i++;
	}
	float max = arr[0];
	for(int i = 0; i < n; i++) {
		if(max < arr[i]) {
			max = arr[i];
		}
	}
	std::cout << max;

}
