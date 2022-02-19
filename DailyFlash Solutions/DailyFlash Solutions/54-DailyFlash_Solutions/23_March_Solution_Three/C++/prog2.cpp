#include<bits/stdc++.h>

int main() {
	char arr[10];
	std::cin.getline(arr, sizeof(arr));
	for(int i = 0; i < strlen(arr); i++) {
		if(arr[i] == 'a' || arr[i] == 'e' || arr[i] == 'i' || arr[i] == 'o' || arr[i] == 'u') {
			std::cout << (int)arr[i];
		}
	}
}

