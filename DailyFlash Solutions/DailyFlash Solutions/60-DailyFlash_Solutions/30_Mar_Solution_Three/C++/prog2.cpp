#include<bits/stdc++.h>

int main() {
	char arr[100];
	int words = 0;
	std::cin.getline(arr, sizeof(arr));
	for(int i = 0; i < strlen(arr); i++) {
		if(arr[i] == ' ')
			words++;
	}
	std::cout << words + 1;
}

