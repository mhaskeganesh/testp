#include<bits/stdc++.h>

int main() {
	char arr[10];
	std::cin.getline(arr, sizeof(arr));
	for(int i = 0; i < strlen(arr); i++) {
		std::cout << (char)(arr[i] - 32);
	}
}

