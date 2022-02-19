#include<bits/stdc++.h>
int main() {
	char bin[20];
	for(int i = 0; i < sizeof(bin); i++) {
		bin[i] = '\0';
	}
	int i = 0, num;
	std::cout << "Enter num : ";
	std::cin >> num;
	while(num != 0) {
		bin[i] = num % 2 + '0';
		num /= 2;
		i++;
	}
	int len = strlen(bin);
	std::cout << "Bin : ";
	for(int j = 0; j < len; j++) {
		std::cout << bin[len - 1 - j];
	}
	return 0;
}	
