#include<iostream>
#include<string.h>
int main() {
	char num[10];
	std::cin.getline(num, sizeof(num));

	if(num[0] == '0') {
		std::cout << "Not deck";
		return -1;
	}
	for(int i = 1; i < strlen(num); i++) {
		if(num[i] == '0') {
			std::cout << "Duck num";
			break;
		}
	}
	return 0;
}
