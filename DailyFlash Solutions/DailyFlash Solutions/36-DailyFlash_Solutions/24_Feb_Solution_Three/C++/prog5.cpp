#include<iostream>

int main() {
	int num, sum = 0, cnt = 0;
	std::cout << "Enter num : ";
	std::cin >> num;
	int temp = num;
	int arr[10] = {0};
	while(num != 0) {
		arr[num % 10] += 1;
		num /= 10;
	}	
	for(int i = 0; i < 10; i++) {
		if(arr[i] != 0) {
			std::cout << "Freqn of " << i << " is " << arr[i] << "\n";	
		}
	}
}
