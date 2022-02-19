#include<iostream>
#include<string.h>

int main() {
	int num, i = 0, quo, rem;
	char arr[10];
	for(int i = 0; i < 10; i++) {
		arr[i] = '\0';
	}
	std::cout << "Enter num : ";
	std::cin >> num;

	while(1) {
		quo = num / 16;
		rem = num % 16;
		num = quo;
		arr[i] = rem < 10 ? (char)(48 + rem) : (char)(55 + rem);
		i++;
		if(quo == 0)
			break;
	}	

	for(int i = strlen(arr) - 1; i >= 0; i--) {
		std::cout << arr[i];
	}
	return 0;
}
